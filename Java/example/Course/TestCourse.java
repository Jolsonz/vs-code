package example.Course;

public class TestCourse {
    public static void main(String[] args) {
        Course c1 = new Course("数据结构");
        Course c2 = new Course("数据库系统");

        c1.addStudent("peter");
        c1.addStudent("h");
        c1.addStudent("fjojojo");

        c2.addStudent("jfooj");
        c2.addStudent("jodjfoaj");
        System.out.println("选c1课程的人数 "+c1.getNumberOfStudents());
        String[] student = c1.getStudents();
        for(var i :student){
            if(i == null) break;//防止打印null。这么一想还是vector好用
            System.out.print(i+',');
        }
        System.out.println();
        System.out.println("C2课程名"+c2.getCourseName()+"\n选课人数"+c2.getNumberOfStudents());
    }
}