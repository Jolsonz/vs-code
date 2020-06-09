#ifndef T_
#define T_
#include "Polygons.h"
class Triangle : public Polygons
{
private:
    double sideA,sideB,sideC;
    void calcArea();//计算面积和周长
    void halfPeri();
public:
    Triangle(double sideAIn, double sideBIn, double sideCIn);
};

#endif
