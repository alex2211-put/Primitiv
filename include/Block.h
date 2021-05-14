//
// Created by alik on 04.04.2020.
//

#ifndef PRIMITIV_BLOCK_H
#define PRIMITIV_BLOCK_H

#include "Primitiv.h"
#include "Circle.h"

class Block : private Primitiv  // блок, состоящий из треугольника и круга
{
private:
    Vector2D A;  // координата центра круга                       /|
    Vector2D B;  // координата центра основания треугольника    О  |<- вот эта точка
    double radius;  // радиус круга                               \|

public:
    Block();  // конструктор по умолчанию (координаты по (0, 0) и радиус 0

    Block(Vector2D A, Vector2D B, double radius);  // конструктор принимающий координаты и радиус

    Block(Vector2D A, Vector2D B, double radius, double red, double green, double blue);  // тут также ставим цвет

    void setColor(double red, double green, double blue) override;  // покрасить блок

    void changePositionRight(double right) override;  // движение вправо

    void changePositionLeft(double left) override;  // движение влево

    void changePositionDown(double down) override;// движение вниз

    void changePositionUp(double up) override;  // движение вверх

    void changeSize(double N) override;  // изменить размер блока в N раз (увеличить), чтобы уменьшить - дробное число

    void paintLines() override;  // рисуем только линии, не закрашивая внутри

    void paintPolygon() override;  // рисуем, закрашивая все
};


#endif //PRIMITIV_BLOCK_H
