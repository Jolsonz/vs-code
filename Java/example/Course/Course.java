package example.Course;

public class Course {
    private String courseName;
    private String[] students = new String[100];
    private int numberOfStudent;//这里数据再类里面，自动初始化为0
    public Course(String courseName){
        this.courseName=courseName;
    }
    public void addStudent(String student){
        students[numberOfStudent]=student;
        numberOfStudent++;
    }
    public String[] getStudents(){
        return students;
    }

    public int getNumberOfStudents(){
        return numberOfStudent;
    }

    public String getCourseName(){
        return courseName;
    }
    public void dropStudent(String student){
        //在数组中找到该student，删去，数组后移，numberOfStudent--
    }
}