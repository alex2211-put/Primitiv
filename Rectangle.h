//
// Created by alik on 28.03.2020.
//

#ifndef PRIMITIV_RECTANGLE_H
#define PRIMITIV_RECTANGLE_H

#include <GL/glut.h>
#include "Vector2D.h"

class Rectangle
{
private:
    Vector2D A;
    Vector2D B;
    Vector2D C;
    Vector2D D;

    double red;
    double green;
    double blue;
public:
    Rectangle(Vector2D A, Vector2D B, Vector2D C, Vector2D D);

    Rectangle(Vector2D A, Vector2D B, Vector2D C, Vector2D D, double red, double green, double blue);

    Rectangle(Vector2D A, Vector2D C);

    Rectangle(Vector2D A, Vector2D C, double red, double green, double blue);

    Rectangle();

    void setColor(double red, double green, double blue);

    void paintLines();

    void paintPolygon();

    void changeSIze(double N);

    void changePositionUp(double up);

    void changePositionDown(double down);

    void changePositionLeft(double left);

    void changePositionRight(double right);
};




#endif //PRIMITIV_RECTANGLE_H
