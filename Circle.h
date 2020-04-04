//
// Created by alik on 28.03.2020.
//

#ifndef PRIMITIV_CIRCLE_H
#define PRIMITIV_CIRCLE_H

#include <GL/glut.h>

class Circle : private Primitiv
{
private:
    Vector2D A;  // центр окружности (круга)
    double radius;  // радиус круга

public:
    Circle(Vector2D A, double radius);  // конструктор круга по радиусу и центру

    Circle();  // конструктор круга (координаты (0, 0), радиус 0)

    Circle(Vector2D A, double radius, double red, double green, double blue);  //конструктор по центру, радиусу и цвету

    void setColor(double red, double green, double blue) override;  // меняем цвет кругу

    void changeSize(double N) override;  // изменить размер круга в N раз (увеличить), чтобы уменьшить - дробное число

    void changeRadius(double radius);  // изменить радиус

    void changePositionUp(double up) override;  // движение вверх

    void changePositionDown(double down) override;  // движение виз

    void changePositionLeft(double left) override;  // движение влево

    void changePositionRight(double right) override;  // движение вправо

    void paintLines() override;  // рисуем окружность

    void paintPolygon() override;  // рисуем круг
};


#endif //PRIMITIV_CIRCLE_H
