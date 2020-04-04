//
// Created by alik on 28.03.2020.
//

#include "Circle.h"

Circle::Circle()
{
    this->A = Vector2D(0, 0);
    this->radius = 0;

    red = 0.5;
    green = 0.8;
    blue = 0.5;
}

Circle::Circle(Vector2D A, double radius)
{
    this->A = A;
    this->radius = radius;

    red = 0.5;
    green = 0.8;
    blue = 0.5;
}

Circle::Circle(Vector2D A, double radius, double red, double green, double blue)
{
    this->A = A;
    this->radius = radius;

    this->red = red;
    this->green = green;
    this->blue = blue;
}

void Circle::setColor(double red, double green, double blue)
{
    this->red = red;
    this->green = green;
    this->blue = blue;
}

void Circle::changeRadius(double radius)
{
    this->radius = radius;
}

void Circle::changeSize(double N)
{
    radius *= N;
}

void Circle::changePositionUp(double up)
{
    A.setY(A.getY() + up);
}

void Circle::changePositionDown(double down)
{
    A.setY(A.getY() - down);
}

void Circle::changePositionLeft(double left)
{
    A.setX(A.getX() - left);
}

void Circle::changePositionRight(double right)
{
    A.setX(A.getX() + right);
}

void Circle::paintLines()
{
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < 50; i++)
    {
        double angle = 2.0 * 3.1415926 * double(i) / 50;
        double dx = radius * cosf(angle);
        double dy = radius * sinf(angle);
        glVertex2f(this->A.getX() + dx, this->A.getY() + dy);
    }
    glEnd();
}

void Circle::paintPolygon()
{
    glBegin(GL_POLYGON);
    for (int i = 0; i < 50; i++)
    {
        double angle = 2.0 * 3.1415926 * double(i) / 50;
        double dx = radius * cosf(angle);
        double dy = radius * sinf(angle);
        glVertex2f(this->A.getX() + dx, this->A.getY() + dy);
    }
    glEnd();
}