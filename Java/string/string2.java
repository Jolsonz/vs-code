package string;
// import java.lang.String;
public class string2{
    public static void main(String[] args) {
        String s1 = "hello";
        String s2 = new String("hello");
        String s3 = "hello",s4="fuck you";
        System.out.println("s1==s2 ?  "+(s1==s2));
        System.out.println("s1==s3 ?  "+(s1==s3));
        System.out.println(s1.charAt(0)+"\n"+s1+s4);
    }
}