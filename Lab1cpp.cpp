//#include <stdio.h>
#include <iostream>
#include <iomanip>


using namespace std;

/*
    ОП Лабораторная №1
    Вариант 10
    Автор: Зараник Богдан
*/


int main() {
    double a1, a2, b1, b2, c1, c2;//коэффициенты уравнений системы
    //ввод данных
    cout << "Type in coefficients in format:" << endl;
    cout << endl << "a1 b1 c1" << endl << endl;
    cin >> a1 >> b1 >> c1;
    cout << endl << "a2 b2 c2" << endl << endl;
    cin >> a2 >> b2 >> c2;

    double det = a1 * b2 - b1 * a2;//определитель системы!=0
    double detX = c1 * b2 - c2 * b1;//определитель для 1-й переменной по формуле Крамера
    double detY = a1 * c2 - a2 * c1;//определитель для 2-й переменной по формуле Крамера

    double x, y;//искомые переменные
    x = detX / det;//формула Крамера
    y = detY / det;//формула Крамера
    cout << endl << "Answer is:" << endl << endl;
    cout << setprecision(4) << "x = " << x << "\t" << "y = " << y << endl;
    //printf("x = %.3f\ty = %.3f\n", x, y);
    cin.get();
    return 0;
}
