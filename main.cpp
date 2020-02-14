#include "mytcp.h"
#include <QApplication>
#include "ui_mytcp.h"
#include "QNetworkInterface"
#include "QList"
#include "QDebug"
#include "QTimer"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mytcp w;
    w.show();

    return a.exec();
}
