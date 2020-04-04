//
// Created by alik on 04.04.2020.
//

#include "Block.h"

void Block::setColor(double red, double green, double blue)
{
    this->red = red;
    this->green = green;
    this->blue = blue;
}

Block::Block()
{
    this->A = Vector2D(0, 0);
    this->B = Vector2D(0, 0);
    this->radius = 0;
    this->red = red;
    this->green = green;
    this->blue = blue;
}

Block::Block(Vector2D A, Vector2D B, double radius)
{
    this->A = A;
    this->B = B;
    this->radius = radius;
}

Block::Block(Vector2D A, Vector2D B, double radius, double red, double green, double blue)
{
    this->A = A;
    this->B = B;
    this->radius = radius;
    this->red = red;
    this->green = green;
    this->blue = blue;
}

void Block::changePositionRight(double right)
{
    A.setX(A.getX() + right);
    B.setX(B.getX() + right);
}

void Block::changePositionLeft(double left)
{
    A.setX(A.getX() - left);
    B.setX(B.getX() - left);
}

void Block::changePositionDown(double down)
{
    A.setY(A.getY() - down);
    B.setY(B.getY() - down);
}

void Block::changePositionUp(double up)
{
    A.setY(A.getY() + up);
    B.setY(B.getY() + up);
}

void Block::changeSize(double N)
{
    A *= N;
    B *= N;
    this->radius *= N;
}

void Block::paintLines()
{
    Circle a = Circle(this->A, this->radius);
    a.paintLines();
    Vector2D O = (B - A);
    Vector2D n = Vector2D(-O.getY(), (O).getX());
    Vector2D C = O + n / sqrt(3);
    Vector2D L = O - n / sqrt(3);
    Triangle b = Triangle(A, C, L);
    b.paintLines();
}

void Block::paintPolygon()
{
    Circle a = Circle(this->A, this->radius);
    a.paintPolygon();
    Vector2D O = (B - A);
    Vector2D n = Vector2D(-O.getY(), (O).getX());
    Vector2D C = O + n / sqrt(3);
    Vector2D L = O - n / sqrt(3);
    Triangle b = Triangle(A, C, L);
    b.paintPolygon();
}
