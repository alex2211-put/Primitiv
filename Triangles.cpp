//
// Created by alik on 25.03.2020.
//

#include "Triangles.h"

Triangle::Triangle(Vector2D A, Vector2D B, Vector2D C)
{
    this->A = A;
    this->B = B;
    this->C = C;
    red = 0.5;
    green = 0.8;
    blue = 0.5;
};

Triangle::Triangle(Vector2D A, Vector2D B, Vector2D C, double red, double green, double blue)
{
    this->A = A;
    this->B = B;
    this->C = C;

    this->red = red;
    this->green = green;
    this->blue = blue;
};

Triangle::~Triangle()
{
    this->A = Vector2D(0, 0);
    this->B = Vector2D(0, 0);
    this->C = Vector2D(0, 0);
    red = 0.5;
    green = 0.8;
    blue = 0.5;
};

Triangle::Triangle()
{
    this->A = Vector2D(0, 0);
    this->B = Vector2D(0, 0);
    this->C = Vector2D(0, 0);
    red = 0.5;
    green = 0.8;
    blue = 0.5;
}

void Triangle::setColor(double red, double green, double blue)
{
    this->red = red;
    this->green = green;
    this->blue = blue;
};

void Triangle::paintLines()
{
    glBegin(GL_LINES);
    glColor3f(red, green, blue);
    glVertex2f(A.getX(), A.getY());
    glColor3f(red, green, blue);
    glVertex2f(B.getX(), B.getY());
    glEnd();
    glBegin(GL_LINES);
    glColor3f(red, green, blue);
    glVertex2f(B.getX(), B.getY());
    glColor3f(red, green, blue);
    glVertex2f(C.getX(), C.getY());
    glEnd();
    glBegin(GL_LINES);
    glColor3f(red, green, blue);
    glVertex2f(A.getX(), A.getY());
    glColor3f(red, green, blue);
    glVertex2f(C.getX(), C.getY());
    glEnd();
};

void Triangle::paintPolygon()
{
    glBegin(GL_POLYGON);
    glColor3f(red, green, blue);
    glVertex2f(A.getX(), A.getY());
    glColor3f(red, green, blue);
    glVertex2f(B.getX(), B.getY());
    glColor3f(red, green, blue);
    glVertex2f(C.getX(), C.getY());
    glEnd();
};

void Triangle::changeSize(double N)
{
    A *= N;
    B *= N;
    C *= N;
};

void Triangle::changePositionUp(double up)
{
    A.setY(A.getY() + up);
    B.setY(B.getY() + up);
    C.setY(C.getY() + up);
}

void Triangle::changePositionDown(double down)
{
    A.setY(A.getY() - down);
    B.setY(B.getY() - down);
    C.setY(C.getY() - down);
}

void Triangle::changePositionLeft(double left)
{
    A.setX(A.getX() - left);
    B.setX(B.getX() - left);
    C.setX(C.getX() - left);
}

void Triangle::changePositionRight(double right)
{
    A.setX(A.getX() + right);
    B.setX(B.getX() + right);
    C.setX(C.getX() + right);
}