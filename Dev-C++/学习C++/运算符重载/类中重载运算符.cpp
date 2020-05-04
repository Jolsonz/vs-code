#include <iostream>
using namespace std;
// 复数类
class complex{
public:
    complex();
    complex(double real, double imag);
public:
    //声明运算符重载
    complex operator+(const complex &A) const;
    // 返回值类型 operator 运算符名称 (形参表列){
/* 
上面的例子中，我们在 complex 类中重载了运算符+，该重载只对 complex 对象有效。
当执行c3 = c1 + c2;语句时，编译器检测到+号左边（+号具有左结合性，所以先检测左边）是一个 complex 对象
就会调用成员函数operator+()，也就是转换为下面的形式：
c3 = c1.operator+(c2);
c1 是要调用函数的对象，c2 是函数的实参。 */
    void display();
private:
    double m_real;  //实部
    double m_imag;  //虚部
};

complex::complex(): m_real(0.0), m_imag(0.0){ }//无参数情况下默认赋值0,0
complex::complex(double real, double imag): m_real(real), m_imag(imag){ }

//实现运算符重载
complex complex::operator+(const complex &A) const{
    complex B;
    B.m_real = this->m_real + A.m_real;
    B.m_imag = this->m_imag + A.m_imag;
    return B;
}
/*更简单的写法
    complex complex::operator+(const complex &A)const{
        return complex(this->m_real + A.m_real, this->m_imag + A.m_imag);
    } 
    都不需要定义一个b
 */
void complex::display(){
    cout<<m_real<<" + "<<m_imag<<"i"<<endl;
}

int main(){
    complex c1(4.3, 5.8);
    complex c2(2.4, 3.7);
    complex c3;
    c3 = c1 + c2;
    c3.display();
 
    return 0;
}

