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

    Rectangle();

    void setColor(double red, double green, double blue) override;

    void paintLines() override;

    void paintPolygon() override;

    void changeSize(double N) override;

    void changePositionUp(double up) override;

    void changePositionDown(double down) override;

    void changePositionLeft(double left) override;

    void changePositionRight(double right) override;
};




#endif //PRIMITIV_RECTANGLE_H
