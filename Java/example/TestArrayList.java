package example;
//这里的警告好多
import java.util.ArrayList;

import example.Extends.Circle4;

public class TestArrayList {
    public static void main(String[] args) {
        ArrayList cityList = new ArrayList();
        cityList.add("London");
        cityList.add("Denver");
        cityList.add("Paris");
        cityList.add("Miami");
        System.out.println("List size = "+cityList.size());
        System.out.println("Is Miami in the list? "+cityList.contains("Miami"));
        System.out.println("is the list empty?  "+cityList.isEmpty());
        System.out.println("The location of Paris?  "+cityList.indexOf("Paris"));
        cityList.remove(1);
        cityList.remove("Paris");
        System.out.println(cityList.toString());

        ArrayList mList = new ArrayList();

        mList.add(new Circle4(2));
        mList.add(new Circle4(3));

        System.out.println("The area of the circle?  "+ ((Circle4)mList.get(0)).getArea());
        System.out.println(mList.toString());//调用了
    }
}