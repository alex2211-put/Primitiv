//
// Created by alik on 28.03.2020.
//

#include "Spring.h"

Spring::Spring()
{
    this->A = Vector2D(0, 0);
    this->B = Vector2D(0, 0);
    width = 0;
    quantity = 0;

    red = 0.5;
    green = 0.8;
    blue = 0.5;
}

Spring::Spring(Vector2D A, Vector2D B, double width, int quantity)
{
    this->A = Vector2D(0, 0);
    this->B = Vector2D(0, 0);
    this->width = width;
    this->quantity = quantity;

    red = 0.5;
    green = 0.8;
    blue = 0.5;
}

Spring::Spring(Vector2D A, Vector2D B, double width, int quantity, double red, double green, double blue)
{
    this->A = Vector2D(0, 0);
    this->B = Vector2D(0, 0);
    this->width = width;
    this->quantity = quantity;

    this->red = red;
    this->green = green;
    this->blue = blue;
}

void Spring::setColor(double red, double green, double blue)
{
    this->red = red;
    this->green = green;
    this->blue = blue;
}

void Spring::changeA(Vector2D A)
{
    this->A = A;
}

void Spring::changeB(Vector2D B)
{
    this->B = B;
}

void Spring::paint()
{
    Vector2D O = A;
    int i = 0;
    bool down = true;
    while (i < quantity)
    {
        if (i == 0)
        {
            glBegin(GL_LINES);
            glColor3f(red, green, blue);
            glVertex2f(O.getX(), O.getY());
            glColor3f(red, green, blue);
            glVertex2f(O.getX() + (B - A).length() / (quantity * 2 + 2), O.getY() + width / 2);
            glEnd();
            O = Vector2D(O.getX() + (B - A).length() / (quantity * 2 + 2), O.getY() + width / 2);
        } else if (i == quantity - 1)
        {
            glBegin(GL_LINES);
            glColor3f(red, green, blue);
            glVertex2f(O.getX(), O.getY());
            glColor3f(red, green, blue);
            glVertex2f(O.getX() + (B - A).length() / (quantity * 2 + 2), O.getY() - width / 2);
            glEnd();
            O = Vector2D(O.getX() + (B - A).length() / (quantity * 2 + 2), O.getY() - width / 2);
        } else
        {
            if (down)
            {
                glBegin(GL_LINES);
                glColor3f(red, green, blue);
                glVertex2f(O.getX(), O.getY());
                glColor3f(red, green, blue);
                glVertex2f(O.getX() + (B - A).length() / (quantity + 1), O.getY() - width);
                glEnd();
                O = Vector2D(O.getX() + (B - A).length() / (quantity + 1), O.getY() - width);
            } else
            {
                {
                    glBegin(GL_LINES);
                    glColor3f(red, green, blue);
                    glVertex2f(O.getX(), O.getY());
                    glColor3f(red, green, blue);
                    glVertex2f(O.getX() + (B - A).length() / (quantity + 2), O.getY() + width / 2);
                    glEnd();
                }
                O = Vector2D(O.getX() + (B - A).length() / (quantity + 2), O.getY() + width / 2);
            }
        }
        i++;
        down = !down;
    }
}