//
// Created by alik on 28.03.2020.
//

#ifndef PRIMITIV_CIRCLE_H
#define PRIMITIV_CIRCLE_H

#include <GL/glut.h>

class Circle : private Primitiv
{
private:
    Vector2D A;
    double radius;

public:
    Circle(Vector2D A, double radius);

    Circle();

    Circle(Vector2D A, double radius, double red, double green, double blue);

    void setColor(double red, double green, double blue) override;

    void changeSize(double N) override;

    void changeRadius(double radius);

    void changePositionUp(double up) override;

    void changePositionDown(double down) override;

    void changePositionLeft(double left) override;

    void changePositionRight(double right) override;

    void paintLines() override;

    void paintPolygon() override;
};


#endif //PRIMITIV_CIRCLE_H
