//
// Created by alik on 28.03.2020.
//

#ifndef PRIMITIV_SQUARE_H
#define PRIMITIV_SQUARE_H

#include <GL/glut.h>
#include "Vector2D.cpp"

class Square
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
    Square(Vector2D A, Vector2D B, Vector2D C, Vector2D D);

    Square(Vector2D A, Vector2D B, Vector2D C, Vector2D D, double red, double green, double blue);

    Square(Vector2D A, Vector2D C);

    Square(Vector2D A, Vector2D C, double red, double green, double blue);

    Square();

    void setColor(double red, double green, double blue);

    void paintLines();

    void paintPolygon();

    void changeSIze(double N);

    void changePositionUp(double up);

    void changePositionDown(double down);

    void changePositionLeft(double left);

    void changePositionRight(double right);
};


#endif //PRIMITIV_SQUARE_H
