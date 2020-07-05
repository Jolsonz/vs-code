package example.BMI;
//P283
public class BMI {
    private String name;
    private int age;
    private double weight;
    private double height;
    public static final double KILOGRAMS_PER_POUND=0.45359237;
    private static final double METERS_PER_INCH = 0.0254;//这里写private或者public都没影响，但是写成静态的常变量比较好。
    public BMI(String name,int age , double weight ,double height) {
        this.age=age;
        this.weight= weight;
        this.name =name;
        this.height=height;
    }
    public BMI(String name, double weight ,double height){
        this(name,20,weight,height);//年龄默认20
    }
    public double getBMI(){ 
        double a = weight * KILOGRAMS_PER_POUND /((height*METERS_PER_INCH)*(height*METERS_PER_INCH));
        return  Math.round(a*100)/100.0;
    }
    public String getStatus(){
        double bmi = getBMI();
        if(bmi<16)
            return "太瘦了";
        else if(bmi<18)
            return "偏低";
        else if(bmi<24)
            return "正常";
        else if(bmi<29)
            return "偏重";
        else if(bmi<35)
            return "超重";
        else return "无敌重";
    }

    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }

    public double getHeight() {
        return height;
    }

    public double getWeight() {
        return weight;
    }
}