//
// Created by alik on 28.03.2020.
//

#ifndef PRIMITIV_SPRING_H
#define PRIMITIV_SPRING_H

#include <GL/glut.h>

class Spring  // не наследуется от примитива, потому что немного другое построение
{
private:
    Vector2D A;  // координаты одного конца пружины
    Vector2D B;  // координаты второго конца пружины          /\    /\    /\      -|
    double width;  // ширина пружины      ------------>  -\  /  \  /  \  /  \-     } вот эта величина искомая ширина пружины
    int quantity;  // количество зубчиков                  \/    \/    \/         _|
    //                                     |_____________________|
    //                                       вот количество зубцов
    double red;  // красный цвет
    double green;  // зеленый цвет
    double blue;  // голубой цвет
public:
    Spring(Vector2D A, Vector2D B, double width,
           int quantity);  // конструктор с началом прцжины, концом, шириной и количеством зубчиков

    Spring();  // по умолчанию все по 0

    Spring(Vector2D A, Vector2D B, double width, int quantity, double red, double green,
           double blue);  // также с цветом

    void setColor(double red, double green, double blue);  // установить цвет

    void changeA(Vector2D A);  // изменить место крепления пружины (1 конец)

    void changeB(Vector2D B);  // изменить второй конец пружины

    void paintGorisont();  // рисование пружины горизонтально

    void paintVertic(); // рисование пружины вертикально
};


#endif //PRIMITIV_SPRING_H
