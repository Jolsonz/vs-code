#include<bits/stdc++.h>
using namespace std;

int main() {
    double a1=0.039,a2=0.039,a3=0.243,a4=-0.243,a5=-0.079,a6=0.06,a7=0.293,a8=-0.146,a9=0.296;//因素1
    double b1=0.404,b2=0.404,b3=-0.139,b4=0.064,b5=-0.081,b6=-0.175,b7=0.106,b8=0.185,b9=0.062;//因素2
    double c1=-0.186,c2=-0.186,c3=-0.009,c4=0.17,c5=0.527,c6=-0.12,c7=0.115,c8=-0.655,c9=0.135;//因素3
    
    double d1,d2,d3,d4,d5,d6,d7,d8,d9;
    double x=2660.006,y=-412.858,z=-677.475,f=4044.010;

    d1 = x*a1+y*b1+z*c1;
    d2 = x*a2+y*b2+z*c2;
    d3 = x*a3+y*b3+z*c3;
    d4 = x*a4+y*b4+z*c4;
    d5 = x*a5+y*b5+z*c5;
    d6 = x*a6+y*b6+z*c6;
    d7 = x*a7+y*b7+z*c7;
    d8 = x*a8+y*b8+z*c8;
    d9 = x*a9+y*b9+z*c9;

    cout<<d1<<endl;
    cout<<d2<<endl;
    cout<<d3<<endl;
    cout<<d4<<endl;
    cout<<d5<<endl;
    cout<<d6<<endl;
    cout<<d7<<endl;
    cout<<d8<<endl;
    cout<<d9<<endl;

    return 0;
}