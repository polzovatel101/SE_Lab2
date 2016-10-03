//
// Created by Илья Яновой on 17.09.2016.
//
#include <iostream>
#include "CViewWindowInfo.h"
#include "CWindow.h"
using namespace std;
/**
* Конструктор без параметров
* @return
*/
CViewWindowInfo::CViewWindowInfo() {
        std::cout << "Нет входящих данных! " << endl;
    }

/**
* Конструктор с 1 параметром
* @param window экземпляр класса CWindow
* @return
*/
CViewWindowInfo::CViewWindowInfo(CWindow *window) {
    idWindow = window->getIdWindow();
    positionX1 = window->positionX1;
    positionX2 = window->positionX2;
    positionY1 = window->positionY1;
    positionY2 = window->positionY2;
    }

CViewWindowInfo* CViewWindowInfo::setDataSource(CWindow *window) {
    CViewWindowInfo* view = new CViewWindowInfo(window);
    return view;
}

void CViewWindowInfo::printData() {
    setlocale(LC_ALL, "C");
    cout << char(179) << "   " << idWindow << "   " << char(179) << "   " <<  positionX1 << "    "  << char(179) << "   " << positionX2 << "   "   << char(179) << "   " << positionY1 << "    "  << char(179) << "   " << positionY2 << "   "  << char(179) << endl;
}


void CViewWindowInfo::printData(CWindow *window) {
    window->getIdWindow();
    cout << "\tStart point on X: " << window->positionX1 << endl;
    cout << "\tEnded point on X: " << window->positionX2 << endl;
    cout << "\tStart point on Y: " << window->positionY1 << endl;
    cout << "\tEnded point on Y: " << window->positionY2 << endl << endl;
}
