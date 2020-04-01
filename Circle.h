//
// Created by alik on 28.03.2020.
//

#ifndef PRIMITIV_CIRCLE_H
#define PRIMITIV_CIRCLE_H

#include <GL/glut.h>
#include "Vector2D.cpp"

class Circle
{
private:
    Vector2D A;
    double radius;

    double red;
    double green;
    double blue;
public:
    Circle(Vector2D A, double radius);

    Circle();

    Circle(Vector2D A, double radius, double red, double green, double blue);

    void setColor(double red, double green, double blue);

    void changeSize(double N);

    void changeRadius(double radius);

    void changePositionUp(double up);

    void changePositionDown(double down);

    void changePositionLeft(double left);

    void changePositionRight(double right);

    void paintLine();

    void paintPolygon();
};


#endif //PRIMITIV_CIRCLE_H
