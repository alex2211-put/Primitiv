//
// Created by alik on 25.03.2020.
//

#ifndef PRIMITIV_TRIANGLES_H
#define PRIMITIV_TRIANGLES_H

#include <GL/glut.h>
#include "Primitiv.h"

class Triangle : private Primitiv
{
private:
    Vector2D A;  // координаты вершин треугольника
    Vector2D B;
    Vector2D C;

public:
    Triangle(Vector2D A, Vector2D B, Vector2D C);  // конструктор треугольника по трем точкам

    Triangle(Vector2D A, Vector2D B, Vector2D C, double red, double green,
             double blue);  // конструктор по 3 точкам и цвет

    Triangle();  // по умолчанию координаты (0,0)

    ~Triangle();  // деструктор

    void paintLines() override;  // рисование тругольника - линии, не закрашивая его

    void paintPolygon() override;  // рисование треугольника, закрашивая

    void
    changeSize(double N) override;  // изменить размер трегольника в N раз (увеличить), чтобы уменьшить - дробное число

    void changePositionUp(double up) override;  // движение вверх

    void changePositionDown(double down) override;  // движение вниз

    void changePositionLeft(double left) override;  // движение влево

    void changePositionRight(double right) override;  // движение вправо

    void setColor(double red, double green, double blue) override;  // изменить цвет треугольника
};


#endif //PRIMITIV_TRIANGLES_H
