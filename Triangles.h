//
// Created by alik on 25.03.2020.
//

#ifndef PRIMITIV_TRIANGLES_H
#define PRIMITIV_TRIANGLES_H

#include <GL/glut.h>
#include "Vector2D.cpp"

class Triangle
{
private:
    Vector2D A;
    Vector2D B;
    Vector2D C;

    double red;
    double green;
    double blue;
public:
    Triangle(Vector2D A, Vector2D B, Vector2D C);

    Triangle(Vector2D A, Vector2D B, Vector2D C, double red, double green, double blue);

    Triangle();

    ~Triangle();

    void setColor(double red, double green, double blue);

    void paintLines();

    void paintPolygon();

    void changeSIze(double N);

    void changePositionUp(double up);

    void changePositionDown(double down);

    void changePositionLeft(double left);

    void changePositionRight(double right);
};


#endif //PRIMITIV_TRIANGLES_H
