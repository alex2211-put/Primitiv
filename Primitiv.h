//
// Created by alik on 04.04.2020.
//

#ifndef PRIMITIV_PRIMITIV_H
#define PRIMITIV_PRIMITIV_H

#include "Vector2D.cpp"
class Primitiv
{
protected:
    double red{};
    double green{};
    double blue{};
public:
    virtual void paintLines() = 0;

    virtual void paintPolygon() = 0;

    virtual void changeSize(double N) = 0;

    virtual void changePositionUp(double up) = 0;

    virtual void changePositionDown(double down) = 0;

    virtual void changePositionLeft(double left) = 0;

    virtual void changePositionRight(double right) = 0;

    virtual void setColor(double red, double green, double blue) = 0;
};



#endif //PRIMITIV_PRIMITIV_H
