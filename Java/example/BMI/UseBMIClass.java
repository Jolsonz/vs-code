package example.BMI;

public class UseBMIClass {
    public static void main(String[] args) {
        BMI bmi1 = new BMI("John doe",18,145,70);
        System.out.println("姓名="+bmi1.getName()+" bmi= "+bmi1.getBMI()+" 状态 "+bmi1.getStatus());
        BMI bmi2 = new BMI("你",215,70);
        System.out.println("姓名="+bmi2.getName()+" bmi= "+bmi2.getBMI()+" 状态 "+bmi2.getStatus());
    }
}