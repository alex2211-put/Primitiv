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
    Vector2D A;
    Vector2D B;
    Vector2D C;

public:
    Triangle(Vector2D A, Vector2D B, Vector2D C);

    Triangle(Vector2D A, Vector2D B, Vector2D C, double red, double green, double blue);

    Triangle();

    ~Triangle();

    void paintLines() override;

    void paintPolygon() override;

    void changeSize(double N) override;

    void changePositionUp(double up) override;

    void changePositionDown(double down) override;

    void changePositionLeft(double left) override;

    void changePositionRight(double right) override;

    void setColor(double red, double green, double blue) override;
};


#endif //PRIMITIV_TRIANGLES_H
