/*******************************************************************************
 * Copyright (c) 2016,青岛艾普智能仪器有限公司
 * All rights reserved.
 *
 * version:     1.0
 * author:      link
 * date:        2016.08.18
 * brief:       主程序
*******************************************************************************/
#include "CWinSerial.h"
#include <QApplication>
/******************************************************************************
  * version:    1.0
  * author:     link
  * date:       2016.08.18
  * brief:      主函数
******************************************************************************/
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CWinSerial w;
    w.show();

    return a.exec();
}
/*******************************************************************************
 *                                  END
*******************************************************************************/
