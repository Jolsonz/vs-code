package example;
// 动态绑定示例
public class DynamicBindingDemo {
    public static void main(String[] args) {
        m(new GraduateStudent());
        //GraduateStudent没有toString，往父类找，Student中有，不用找
        m(new Student());
        m(new Person());
        m(new Object());
        
    }
    public static void m(Object x){
        System.out.println(x.toString());
    }
}
class test extends GraduateStudent{
    public String toString(){
        return "test";
    }
}

class GraduateStudent extends Student{

}

class Student extends Person  {
    public String toString(){
        return "Student";
    }
}

class Person extends Object{
    public String toString(){
        return "Person";
    }
}