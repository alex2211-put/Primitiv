//
// Created by alik on 28.03.2020.
//

#ifndef PRIMITIV_SPRING_H
#define PRIMITIV_SPRING_H

#include <GL/glut.h>
#include "Vector2D.h"

class Spring
{
private:
    Vector2D A;
    Vector2D B;
    double width;
    int quantity;

    double red;
    double green;
    double blue;
public:
    Spring(Vector2D A, Vector2D B, double width, int quantity);

    Spring();

    Spring(Vector2D A, Vector2D B, double width, int quantity, double red, double green, double blue);

    void setColor(double red, double green, double blue);

    void changeA(Vector2D A);

    void changeB(Vector2D B);

    void paint();
};


#endif //PRIMITIV_SPRING_H
