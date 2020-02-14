/********************************************************************************
** Form generated from reading UI file 'mytcp.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYTCP_H
#define UI_MYTCP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mytcp
{
public:
    QWidget *centralWidget;
    QTextBrowser *edtRecRobot;
    QLabel *label_5;
    QLabel *label_4;
    QPushButton *btnSend;
    QLabel *label_7;
    QFrame *line;
    QLabel *label_6;
    QLineEdit *edtK4Port;
    QPushButton *conRobot;
    QTextEdit *edtSend;
    QLabel *label_8;
    QLabel *label_2;
    QLineEdit *edtK4IP;
    QPushButton *conK4;
    QFrame *line_2;
    QComboBox *comboBox;
    QTextBrowser *edtRecK4;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *edtRobotIP;
    QPushButton *clearK4;
    QLabel *label_9;
    QLineEdit *edtRobotPort;
    QPushButton *clearRobot;
    QCheckBox *ckbHexSend;
    QCheckBox *ckbHexShow;
    QPushButton *autoCon;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *mytcp)
    {
        if (mytcp->objectName().isEmpty())
            mytcp->setObjectName(QString::fromUtf8("mytcp"));
        mytcp->resize(757, 676);
        centralWidget = new QWidget(mytcp);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        edtRecRobot = new QTextBrowser(centralWidget);
        edtRecRobot->setObjectName(QString::fromUtf8("edtRecRobot"));
        edtRecRobot->setGeometry(QRect(40, 30, 256, 192));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(390, 290, 81, 16));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(390, 260, 91, 16));
        btnSend = new QPushButton(centralWidget);
        btnSend->setObjectName(QString::fromUtf8("btnSend"));
        btnSend->setGeometry(QRect(420, 460, 131, 81));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(50, 260, 81, 16));
        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 370, 761, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(50, 240, 54, 12));
        edtK4Port = new QLineEdit(centralWidget);
        edtK4Port->setObjectName(QString::fromUtf8("edtK4Port"));
        edtK4Port->setGeometry(QRect(480, 290, 41, 20));
        conRobot = new QPushButton(centralWidget);
        conRobot->setObjectName(QString::fromUtf8("conRobot"));
        conRobot->setGeometry(QRect(50, 320, 75, 23));
        edtSend = new QTextEdit(centralWidget);
        edtSend->setObjectName(QString::fromUtf8("edtSend"));
        edtSend->setGeometry(QRect(40, 410, 291, 191));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(50, 380, 61, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(380, 10, 131, 16));
        edtK4IP = new QLineEdit(centralWidget);
        edtK4IP->setObjectName(QString::fromUtf8("edtK4IP"));
        edtK4IP->setGeometry(QRect(470, 260, 113, 20));
        conK4 = new QPushButton(centralWidget);
        conK4->setObjectName(QString::fromUtf8("conK4"));
        conK4->setGeometry(QRect(560, 290, 75, 23));
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(330, 0, 16, 371));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        comboBox = new QComboBox(centralWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(110, 380, 69, 22));
        edtRecK4 = new QTextBrowser(centralWidget);
        edtRecK4->setObjectName(QString::fromUtf8("edtRecK4"));
        edtRecK4->setGeometry(QRect(380, 30, 256, 192));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 10, 91, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(390, 240, 121, 16));
        edtRobotIP = new QLineEdit(centralWidget);
        edtRobotIP->setObjectName(QString::fromUtf8("edtRobotIP"));
        edtRobotIP->setGeometry(QRect(130, 260, 113, 20));
        clearK4 = new QPushButton(centralWidget);
        clearK4->setObjectName(QString::fromUtf8("clearK4"));
        clearK4->setGeometry(QRect(560, 320, 75, 23));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(50, 290, 81, 16));
        edtRobotPort = new QLineEdit(centralWidget);
        edtRobotPort->setObjectName(QString::fromUtf8("edtRobotPort"));
        edtRobotPort->setGeometry(QRect(130, 290, 71, 20));
        clearRobot = new QPushButton(centralWidget);
        clearRobot->setObjectName(QString::fromUtf8("clearRobot"));
        clearRobot->setGeometry(QRect(140, 320, 75, 23));
        ckbHexSend = new QCheckBox(centralWidget);
        ckbHexSend->setObjectName(QString::fromUtf8("ckbHexSend"));
        ckbHexSend->setGeometry(QRect(390, 320, 81, 16));
        ckbHexShow = new QCheckBox(centralWidget);
        ckbHexShow->setObjectName(QString::fromUtf8("ckbHexShow"));
        ckbHexShow->setGeometry(QRect(460, 320, 71, 16));
        autoCon = new QPushButton(centralWidget);
        autoCon->setObjectName(QString::fromUtf8("autoCon"));
        autoCon->setGeometry(QRect(230, 320, 75, 23));
        mytcp->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(mytcp);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 757, 23));
        mytcp->setMenuBar(menuBar);
        mainToolBar = new QToolBar(mytcp);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mytcp->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(mytcp);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        mytcp->setStatusBar(statusBar);

        retranslateUi(mytcp);

        QMetaObject::connectSlotsByName(mytcp);
    } // setupUi

    void retranslateUi(QMainWindow *mytcp)
    {
        mytcp->setWindowTitle(QApplication::translate("mytcp", "mytcp", nullptr));
        label_5->setText(QApplication::translate("mytcp", "\346\234\215\345\212\241\345\231\250\347\253\257\345\217\243\345\217\267\357\274\232", nullptr));
        label_4->setText(QApplication::translate("mytcp", "\346\234\215\345\212\241\345\231\250ip\345\234\260\345\235\200\357\274\232", nullptr));
        btnSend->setText(QApplication::translate("mytcp", "\345\217\221\351\200\201", nullptr));
        label_7->setText(QApplication::translate("mytcp", "\347\224\265\350\204\221ip\345\234\260\345\235\200\357\274\232", nullptr));
        label_6->setText(QApplication::translate("mytcp", "\347\275\221\347\273\234\350\256\276\347\275\256", nullptr));
        edtK4Port->setText(QApplication::translate("mytcp", "3100", nullptr));
        conRobot->setText(QApplication::translate("mytcp", "\350\277\236\346\216\245\347\224\265\350\204\221", nullptr));
        label_8->setText(QApplication::translate("mytcp", "\345\217\221\351\200\201\346\214\207\344\273\244\357\274\232", nullptr));
        label_2->setText(QApplication::translate("mytcp", "\346\216\245\346\224\266\344\274\240\346\204\237\345\231\250\346\214\207\344\273\244\357\274\232", nullptr));
        edtK4IP->setText(QApplication::translate("mytcp", "192.168.1.242", nullptr));
        conK4->setText(QApplication::translate("mytcp", "\350\277\236\346\216\245\344\274\240\346\204\237\345\231\250", nullptr));
        comboBox->setItemText(0, QApplication::translate("mytcp", "\344\274\240\346\204\237\345\231\250", nullptr));
        comboBox->setItemText(1, QApplication::translate("mytcp", "\347\224\265\350\204\221", nullptr));

        label->setText(QApplication::translate("mytcp", "\346\216\245\346\224\266\347\224\265\350\204\221\346\214\207\344\273\244\357\274\232", nullptr));
        label_3->setText(QApplication::translate("mytcp", "\347\275\221\347\273\234\350\256\276\347\275\256", nullptr));
        edtRobotIP->setText(QApplication::translate("mytcp", "192.168.1.1", nullptr));
        clearK4->setText(QApplication::translate("mytcp", "\346\270\205\351\231\244\346\230\276\347\244\272", nullptr));
        label_9->setText(QApplication::translate("mytcp", "\347\224\265\350\204\221\347\253\257\345\217\243\345\217\267\357\274\232", nullptr));
        edtRobotPort->setText(QApplication::translate("mytcp", "8000", nullptr));
        clearRobot->setText(QApplication::translate("mytcp", "\346\270\205\351\231\244\346\230\276\347\244\272", nullptr));
        ckbHexSend->setText(QApplication::translate("mytcp", "HEX\345\217\221\351\200\201", nullptr));
        ckbHexShow->setText(QApplication::translate("mytcp", "HEX\346\230\276\347\244\272", nullptr));
        autoCon->setText(QApplication::translate("mytcp", "\350\207\252\345\212\250\350\277\236\346\216\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mytcp: public Ui_mytcp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYTCP_H
