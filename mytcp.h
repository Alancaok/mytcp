#ifndef MYTCP_H
#define MYTCP_H
#include <QMainWindow>
#include <QTcpSocket>
#include <QHostAddress>
#include <QMessageBox>

namespace Ui {
class mytcp;
}

class mytcp : public QMainWindow
{
    Q_OBJECT

public:
    explicit mytcp(QWidget *parent = 0);
    QTcpSocket *tcpClient;
    QTcpSocket *tcpClient1;
    QString GetHostIpAdress();
    void StringToHex(QString str,QByteArray &senddata);
    char ConvertHexChar(char ch);

    ~mytcp();

private slots:
    void ReadData();
    void ReadError(QAbstractSocket::SocketError);

    void on_conRobot_clicked();

    void on_conK4_clicked();

    void on_btnSend_clicked();

    void on_clearRobot_clicked();

    void on_clearK4_clicked();


    void on_autoCon_clicked();

private:
    Ui::mytcp *ui;
};

#endif // MYTCP_H
