#include <iostream>
using namespace std;

class Student{
private:
    char *m_name;
    int m_age;
    float m_score;
public:
    //声明构造函数
    Student(char *name, int age, float score);
    Student(){};//默认构造函数，无参数也可以。
    //声明普通成员函数
    void show();
};

//定义构造函数
Student::Student(char *name, int age, float score){
    m_name = name;
    m_age = age;
    m_score = score;
}
//定义普通成员函数
void Student::show(){
    cout<<m_name<<"的年龄是"<<m_age<<"，成绩是"<<m_score<<endl;
}

int main(){
    //创建对象时向构造函数传参
    Student stu("小明", 15, 92.5);
    Student test;//这里就不用初始化，因为写了个默认构造函数。
    stu.show();
    //创建对象时向构造函数传参
    Student *pstu = new Student("李华", 16, 96);
    pstu -> show();

    return 0;
}

