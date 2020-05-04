#ifndef CIRCLE_H
#define CIRCLE_H

#include "Point.h"//point.h里有iostream和using namespace

class Circle:public Point
{
public:
    Circle(float a = 0, float b = 0, float r = 0);
    float getR();
    void setR(float r);
    float area();
    friend ostream& operator<<(ostream &output, Circle &c);    //运算符重载
protected:
    float radius;
};

#endif