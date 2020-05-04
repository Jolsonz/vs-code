#include<iostream>
#include"Circle.h"
using namespace std;

Circle::Circle(float a, float b, float r) :Point(a, b), radius(r) { }

float Circle::getR()
{
    return radius;
}

void Circle::setR(float r)
{
    radius = r;
}

float Circle::area()
{
    return 3.14*radius*radius;
}

ostream& operator<<(ostream &output, Circle &c)    //运算符重载
{
    output << "圆心：（" << c.x << "," << c.y << ")   半径：" << c.radius << "     面积：" << c.area() << endl;
    return output;
}