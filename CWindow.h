//
// Created by Илья Яновой on 17.09.2016.
//

#ifndef YANOVOY01_CWINDOW_H
#define YANOVOY01_CWINDOW_H


class CWindow {
public:
	int positionX1; 
	int positionX2; 
	int positionY1; 
	int positionY2;

    int getIdWindow();

    /**
     * Конструктор без параметров
     * @return
     */
    CWindow();

    /**
     * Конструктор с 2 параметрами
     * @param idWindow уникальный идентификатор окна
     * @param positionX1 Начальная точка по оси Х
     * @return
     */
    CWindow(const int positionX1);

    /**
     * Конструктор с 3 параметрами
     * @param idWindow уникальный идентификатор окна
     * @param positionX1 Начальная точка по оси Х
     * @param positionX2 Конечная точка по оси Х
     * @return
     */
    CWindow(const int positionX1, int positionX2);

    /**
     * Конструктор с 4 параметрами
     * @param idWindow уникальный идентификатор окна
     * @param positionX1 Начальная точка по оси Х
     * @param positionX2 Конечная точка по оси Х
     * @param positionY1 Начальная точка по оси Y
     * @return
     */
    CWindow(const int positionX1, int positionX2, int positionY1);

    /**
     * Конструктор с 5 параметрами
     * @param idWindow уникальный идентификатор окна
     * @param positionX1 Начальная точка по оси Х
     * @param positionX2 Конечная точка по оси Х
     * @param positionY1 Начальная точка по оси Y
     * @param positionY2 Конечная точка по оси Y
     * @return
     */
    CWindow(const int positionX1, int positionX2, int positionY1, int positionY2);

    /**
     * Деструктор класса CWindow
     */
    ~CWindow();

private:
    int idWindow;
};


#endif //YANOVOY01_CWINDOW_H
