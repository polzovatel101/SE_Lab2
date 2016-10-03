#include <iostream>
#include "CWindow.h"
#include "CViewWindowInfo.h"
using namespace std;

void linearLine(int num){
    for(int i = 0; i < num; i++){
        cout << char(196);
    }
}

void centralLine(){
    cout << char(195);
    linearLine(9);
    for(int i = 0; i < 2; i++) {
        cout << char(197);
        linearLine(8);
        cout << char(197);
        linearLine(6);
    }
    cout << char(196) << char(180) << endl;
}

void viewTableHeader(){
    cout << char(218);
    linearLine(42);
    cout << char(191) << endl;
    cout << char(179) << " idWindow " << char(179) << " Start X " <<  char(179) << " End X " << char(179) << " Start Y " << char(179) << " End Y " << char(179) << endl;
    centralLine();
}

void  viewTableFooter(){
    cout << char(192);
    linearLine(42);
    cout << char(217) << endl;
}

int main() {
	setlocale(LC_ALL, "Russian");
    setlocale(LC_ALL, "C");
	cout << "Hello, user!" << endl << endl;
    CWindow* window1 = new CWindow();
    CWindow* window2 = new CWindow(40);
    CWindow* window3 = new CWindow(57, 757);
    CWindow* window4 = new CWindow(68, 668, 50);
    CWindow* window5 = new CWindow(35, 935, 47, 447);

    CViewWindowInfo view1(window1);
//    view1.printData();
//    view1.printData(window1);
//
    CViewWindowInfo view2(window2);
//    view2.printData();
//    view2.printData(window2);
//
    CViewWindowInfo view3(window3);
//    view3.printData();
//    view3.printData(window3);
//
    CViewWindowInfo view4(window4);
//    view4.printData();
//    view4.printData(window4);
//
    CViewWindowInfo view5(window5);
//    view5.printData();
//    view5.printData(window5);

    viewTableHeader();
    view1.printData();
    centralLine();
    view2.printData();
    centralLine();
    view3.printData();
    centralLine();
    view4.printData();
    centralLine();
    view5.printData();
    viewTableFooter();


	delete window1;

    return 0;
}