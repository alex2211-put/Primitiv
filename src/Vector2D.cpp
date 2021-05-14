//
// Created by david on 30.03.2020.
//

#include "Vector2D.h"

Vector2D::Vector2D(){
this->x = 0;
this->y = 0;
};

Vector2D::Vector2D(double x, double y)
{
    this->x = x;
    this->y = y;
};

Vector2D::~Vector2D()
{
    x=0;
    y=0;
};

double Vector2D::getX() const {
    return x;
}

double Vector2D::getY() const {
    return y;
}

void Vector2D::setX(double x) {
    this->x = x;
}

void Vector2D::setY(double y) {
    this->y = y;
}

double Vector2D::length ()
{
    return sqrt(getX()*getX()+getY()*getY());
}

double Vector2D::angle(Vector2D v) {

    return acos((getX() * v.getX() + getY() * v.getY()) / (length() * v.length()));
}

bool Vector2D::operator==(const Vector2D &v) const {
    return ((this->x == v.x) && (this->y == v.y));
}

bool Vector2D::operator!=(const Vector2D &v) const {
    return !(*this == v);
}

Vector2D& Vector2D::operator=(Vector2D v) {
    x = v.getX();
    y = v.getY();
    return *this;
}

Vector2D Vector2D::operator+(const Vector2D &v) const {
    Vector2D q(this->x + v.getX(), this->y + v.getY());
    return q;
}

Vector2D Vector2D::operator-(const Vector2D &v) const {
    Vector2D q(this->x - v.getX(), this->y - v.getY());
    return q;
}

Vector2D Vector2D::operator*(const double &a) const {
    Vector2D q(a * (this->x), a * (this->y));
    return q;
}

void Vector2D::operator*=(double a) {
    *this = (*this)*a;
}

void Vector2D::operator+=(Vector2D v) {
    *this = (*this) + v;
}

Vector2D Vector2D::operator/(const double &a) const {
    Vector2D q(this->x / a, this->y / a);
    return q;
}

Vector2D operator* (double a, const Vector2D v)
{
    Vector2D q(a*(v.getX()),a*(v.getY()));
    return q;
}

ostream& operator<<(ostream& os, const Vector2D& v)
{
    os << "("<<v.getX()<<"; "<<v.getY()<<")";
    return os;
}

istream& operator>>(istream &is, Vector2D& v)
{
    double a,b;
    is >> a>> b;
    v.setX(a);
    v.setY(b);
    return is;
}
