#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qdebug.h"

MainWindow::MainWindow()
{
  LeCroy le;
  //qDebug() << le.ConnectDevice("TCPIP0::192.168.70.36::inst0::INSTR");
  //qDebug() << le.IDN();
    //qDebug() << le.initLectoy("USB0::0x05FF::0x1023::3565N20171::INSTR");
    qDebug() << le.ConnectDevice("TCPIP0::192.168.70.36::inst0::INSTR");
    qDebug() << le.WaveFormFormat("OFF","BYTE");
    qDebug() << le.WaveForm("C1","DAT1",1000000);
    qDebug() << le.DisconnectDevice();
}
//=======================================================
MainWindow::~MainWindow()
{

}

