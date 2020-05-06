#ifndef CYLINDER_H
#define CYLINDER_H

#include "Circle.h"

class Cylinder :public Circle
{
public:
    Cylinder(float a = 0, float b = 0, float r = 0, float h = 0);//构造函数声明
    void setH(float h);//高
    float getH();
    float area();//圆柱体的表面积
    float volume();//体积
    friend ostream& operator<<(ostream&, Cylinder&);
private:
    float height;
};

#endif
