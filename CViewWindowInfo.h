//
// Created by Илья Яновой on 17.09.2016.
//
#include "CWindow.h"
#ifndef YANOVOY01_CVIEWWINDOWINFO_H
#define YANOVOY01_CVIEWWINDOWINFO_H



class CViewWindowInfo {
public:
    int idWindow;
    int positionX1;
    int positionX2;
    int positionY1;
    int positionY2;

    /**
     * Конструктор без параметров
     * @return
     */
    CViewWindowInfo();

    /**
     * Конструктор с 1 параметром
     * @param window экземпляр класса CWindow
     * @return
     */
    CViewWindowInfo(CWindow *window);

    CViewWindowInfo* setDataSource(CWindow *window);

    void printData();

    void printData(CWindow *window);

};


#endif //YANOVOY01_CVIEWWINDOWINFO_H
