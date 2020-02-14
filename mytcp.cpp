#include "mytcp.h"
#include "ui_mytcp.h"
#include "QNetworkInterface"
#include "QList"
#include "QDebug"
#include "QTimer"
#include "QMessageBox"
#pragma execution_character_set("utf-8")
mytcp::mytcp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mytcp)
{
    ui->setupUi(this);
    tcpClient = new QTcpSocket(this);   //实例化tcpClient
    tcpClient->abort();                 //取消原有连接
    tcpClient1 = new QTcpSocket(this);   //实例化tcpClient
    tcpClient1->abort();
    ui->conK4->setEnabled(true);
    ui->conRobot->setEnabled(true);
    ui->btnSend->setEnabled(false);

    QString IpRobotAdress = GetHostIpAdress();
    QString IpK4Adress = GetHostIpAdress();
    ui->edtRobotIP->setText(IpRobotAdress);
    ui->edtK4IP->setText(IpK4Adress);
    connect(tcpClient, SIGNAL(readyRead()), this, SLOT(ReadData()));
    connect(tcpClient, SIGNAL(error(QAbstractSocket::SocketError)), \
            this, SLOT(ReadError(QAbstractSocket::SocketError)));
    connect(tcpClient1, SIGNAL(readyRead()), this, SLOT(ReadData()));
    connect(tcpClient1, SIGNAL(error(QAbstractSocket::SocketError)), \
            this, SLOT(ReadError(QAbstractSocket::SocketError)));

}
void mytcp::ReadError(QAbstractSocket::SocketError)
{
    tcpClient1->disconnectFromHost();
    ui->conK4->setText(tr("连接传感器"));
    QMessageBox msgBox;
    msgBox.setText(tr("failed to connect server because %1").arg(tcpClient1->errorString()));
    msgBox.exec();
}
mytcp::~mytcp()
{
    delete ui;
}
QString mytcp::GetHostIpAdress()
{
    QString strIpAddress;
    QList<QHostAddress> ipAdressList = QNetworkInterface::allAddresses();
    int nListSize = ipAdressList.size();
    //qDebug()<<nListSize;
    for(int i=0;i<nListSize;i++)
    {
        if(ipAdressList.at(i)!=QHostAddress::LocalHost && ipAdressList.at(i).toIPv4Address())
        {
            strIpAddress = ipAdressList.at(i).toString();
            break;
        }
    }
    if(strIpAddress.isEmpty())
        strIpAddress = QHostAddress(QHostAddress::LocalHost).toString();
    return strIpAddress;
}


void mytcp::on_conRobot_clicked()
{
    if(ui->conRobot->text()=="连接电脑")
    {
        tcpClient->connectToHost(ui->edtRobotIP->text(), ui->edtRobotPort->text().toInt());
        if (tcpClient->waitForConnected(1000))  // 连接成功则进入if{}
        {
            ui->conRobot->setText("断开电脑");
            ui->btnSend->setEnabled(true);
        }
    }

    else
    {
        tcpClient->disconnectFromHost();
        if (tcpClient->state() == QAbstractSocket::UnconnectedState \
                || tcpClient->waitForDisconnected(1000))  //已断开连接则进入if{}
        {
            ui->conRobot->setText("连接电脑");
            ui->btnSend->setEnabled(false);
        }
    }
}

void mytcp::on_conK4_clicked()
{
    if(ui->conK4->text()=="连接传感器")
    {
        tcpClient1->connectToHost(ui->edtK4IP->text(), ui->edtK4Port->text().toInt());
        if (tcpClient1->waitForConnected(1000))  // 连接成功则进入if{}
        {
            ui->conK4->setText("断开传感器");
            ui->btnSend->setEnabled(true);
        }
    }
    else
    {
        tcpClient1->disconnectFromHost();
        if (tcpClient1->state() == QAbstractSocket::UnconnectedState \
                || tcpClient1->waitForDisconnected(1000))  //已断开连接则进入if{}
        {
            ui->conK4->setText("连接传感器");
            ui->btnSend->setEnabled(false);
        }
    }
}
void mytcp::ReadData()
{
    QByteArray buffer = tcpClient->readAll();
    QByteArray buffer1 = tcpClient1->readAll();
    if(!buffer1.isEmpty())
    {

        if(ui->ckbHexShow->isChecked())
        {
            QString buf = buffer1.toHex();
            QString display;
            for(int i=0;i<buf.size();i+=2)
            {
                QString temp;
                temp.append(buf[i]);
                temp.append(buf[i+1]);
                temp.append(" ");
                display.append(temp);
                temp.append(buf[i+2]);
                temp.append(buf[i+3]);
                qDebug()<<temp.toInt(NULL,16);
            }

            //ui->edtRecv->append(QString::number(buf.size()));
        }
        else
            ui->edtRecK4->append(buffer1);
    }
    ui->edtRecRobot->append(buffer);


}




void mytcp::on_btnSend_clicked()
{
    QString data = ui->edtSend->toPlainText();
    if(ui->comboBox->currentIndex()==0)
    {

        if(data != "")
        {
            if(ui->ckbHexSend->isChecked())
            {
                QByteArray send_data;
                StringToHex(data,send_data);
                //ui->edtRecK4->append(send_data.toHex());
                //ui->edtRecK4->append(data);

                tcpClient1->write(send_data);
            }
            else
            {


                QByteArray send_data = data.toUtf8();
                send_data=send_data.append("\r");
                //ui->edtRecK4->append(send_data.toHex());
                //tcpClient1->write(send_data);



            }

        }
    }
    else
    {
        tcpClient->write(data.toLatin1());
    }
}


void mytcp::StringToHex(QString str, QByteArray &senddata)
{
    int hexdata,lowhexdata;
    int hexdatalen = 0;
    int len = str.length();
    senddata.resize(len/2);
    char lstr,hstr;
    for(int i=0;i<len;)
    {
        hstr = str[i].toLatin1();
        if(hstr == ' ')
        {
            i++;
            continue;
        }
        i++;
        if(i>=len)
            break;
        lstr = str[i].toLatin1();
        hexdata = ConvertHexChar(hstr);
        lowhexdata = ConvertHexChar(lstr);
        if((hexdata==16)||lowhexdata==16)
            break;
        else
            hexdata = hexdata*16+lowhexdata;
        i++;
        senddata[hexdatalen]=(char)hexdata;
        hexdatalen++;
    }
    senddata.resize(hexdatalen);
}

char mytcp::ConvertHexChar(char ch)
{
    if((ch>='0')&&(ch<='9'))
        return ch - 0x30;
    else if((ch>='A')&&(ch<'F'))
        return ch-'A'+10;
    else if((ch>='a')&&(ch<='f'))
        return ch-'a'+10;
    else
        return ch-ch;
}
void mytcp::on_clearRobot_clicked()
{
    ui->edtRecRobot->clear();
}

void mytcp::on_clearK4_clicked()
{
    ui->edtRecK4->clear();

}


void mytcp::on_autoCon_clicked()
{
    int port=8080;
    QString m;
    m=GetHostIpAdress();


     if(ui->autoCon->text()=="自动连接")
     {
         tcpClient->connectToHost(m, port);
         if (tcpClient->waitForConnected(1000))  // 连接成功则进入if{}
         {
             ui->autoCon->setText("断开");
             ui->btnSend->setEnabled(true);
         }
     }

     else
     {
         tcpClient->disconnectFromHost();
         if (tcpClient->state() == QAbstractSocket::UnconnectedState \
                 || tcpClient->waitForDisconnected(1000))  //已断开连接则进入if{}
         {
             ui->autoCon->setText("自动连接");
             ui->btnSend->setEnabled(false);
         }
     }

}
