#include <iostream>
using namespace std;
// 运算符重载函数不是 complex 类的成员函数
class complex{
public:
    complex();
    complex(double real, double imag);
public:
    void display() const;
    //声明为友元函数
    friend complex operator+(const complex &A, const complex &B);
    //  运算符重载函数不是 complex 类的成员函数，但是却用到了 complex 类的 private 成员变量，所以必须在 complex 类中将该函数声明为友元函数。
private:
    double m_real;
    double m_imag;
};

// complex operator+(const complex &A, const complex &B);//声明，当然，可以不要这一句。

complex::complex(): m_real(0.0), m_imag(0.0){ }
complex::complex(double real, double imag): m_real(real), m_imag(imag){ }
void complex::display() const{
    cout<<m_real<<" + "<<m_imag<<"i"<<endl;
}

//在全局范围内重载+
complex operator+(const complex &A, const complex &B){
    complex C;
    C.m_real = A.m_real + B.m_real;
    C.m_imag = A.m_imag + B.m_imag;
    return C;
}

int main(){
    complex c1(4.1, 5.8);
    complex c2(2.4, 3.17);
    complex c3;
    // 当然，重载的好处就是可以处理大量这种数据。
    c3 = c1 + c2;
    c3.display();
 
    return 0;
}

