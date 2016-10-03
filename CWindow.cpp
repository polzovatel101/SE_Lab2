//
// Created by Илья Яновой on 17.09.2016.
//

#include <iostream>
using namespace std;
#include "CWindow.h"


    int CWindow::getIdWindow() {
        return idWindow;
    }


    /**
     * Конструктор без параметров
     * @return
     */
	CWindow::CWindow() {
        idWindow = 2148;
		positionX1 = 0;
		positionX2 = 0;
		positionY1 = 0;
		positionY2 = 0;
    }

	/**
	* Конструктор с 1 параметром
	* @param positionX1 Начальная точка по оси Х
	* @return
	*/
	CWindow::CWindow(const int positionX1) {
        idWindow = 2149;
        this->positionX1 = positionX1;
        positionX2 = 0;
        positionY1 = 0;
        positionY2 = 0;
    }

	/**
	* Конструктор с 2 параметрами
	* @param positionX1 Начальная точка по оси Х
	* @param positionX2 Конечная точка по оси Х
	* @return
	*/
	CWindow::CWindow(const int positionX1, int positionX2) {
        idWindow = 2150;
        this->positionX1 = positionX1;
        this->positionX2 = positionX2;
        positionY1 = 0;
        positionY2 = 0;
    }

	/**
	* Конструктор с 3 параметрами
	* @param positionX1 Начальная точка по оси Х
	* @param positionX2 Конечная точка по оси Х
	* @param positionY1 Начальная точка по оси Y
	* @return
	*/
	CWindow::CWindow(const int positionX1, int positionX2, int positionY1) {
        idWindow = 2151;
        this->positionX1 = positionX1;
        this->positionX2 = positionX2;
        this->positionY1 = positionY1;
        positionY2 = 0;
    }

	/**
	* Конструктор с 4 параметрами
	* @param positionX1 Начальная точка по оси Х
	* @param positionX2 Конечная точка по оси Х
	* @param positionY1 Начальная точка по оси Y
	* @param positionY2 Конечная точка по оси Y
	* @return
	*/
	CWindow::CWindow(const int positionX1, int positionX2, int positionY1, int positionY2) {
        idWindow = 2152;
        this->positionX1 = positionX1;
        this->positionX2 = positionX2;
        this->positionY1 = positionY1;
        this->positionY2 = positionY2;
    }

	/**
	* Деструктор класса CWindow
	*/
	CWindow::~CWindow()
	{
		cout << "\tdestroy it!\n";
	}
