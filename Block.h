//
// Created by alik on 04.04.2020.
//

#ifndef PRIMITIV_BLOCK_H
#define PRIMITIV_BLOCK_H

#include "Primitiv.h"
#include "Circle.h"

class Block : private Primitiv
{
private:
    Vector2D A;
    Vector2D B;
    double radius;
public:
    Block();
    Block(Vector2D A, Vector2D B, double radius);
    Block(Vector2D A, Vector2D B, double radius, double red, double green, double blue);
    void setColor(double red, double green, double blue) override;
    void changePositionRight(double right) override;
    void changePositionLeft(double left) override;
    void changePositionDown(double down) override;
    void changePositionUp(double up) override;
    void changeSize(double N) override;
    void paintLines() override;
    void paintPolygon() override;
};


#endif //PRIMITIV_BLOCK_H
