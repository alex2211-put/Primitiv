//
// Created by alik on 28.03.2020.
//

#ifndef PRIMITIV_RECTANGLE_H
#define PRIMITIV_RECTANGLE_H

#include <GL/glut.h>
#include "Primitiv.h"

class Rectangle : private Primitiv
{
private:
    Vector2D A;  // координаты вершин
    Vector2D B;
    Vector2D C;
    Vector2D D;

public:
    Rectangle(Vector2D A, Vector2D B, Vector2D C, Vector2D D);  // задание прямоугольника по 4 вершинам

    Rectangle(Vector2D A, Vector2D B, Vector2D C, Vector2D D, double red, double green,
              double blue);  // задание прямоугольника с цветом

    Rectangle();  // по умолчанию координаты (0, 0)

    void setColor(double red, double green, double blue) override;  // изменить цвет

    void paintLines() override;  // рисование, не закрашивая

    void paintPolygon() override;  // рисование с закрашиванием

    void changeSize(
            double N) override;  // изменить размер прямоугольника в N раз (увеличить), чтобы уменьшить - дробное число

    void changePositionUp(double up) override;  // движение вверх

    void changePositionDown(double down) override;  // движение вниз

    void changePositionLeft(double left) override;  // движение влево

    void changePositionRight(double right) override;  // движение вправо
};


#endif //PRIMITIV_RECTANGLE_H
