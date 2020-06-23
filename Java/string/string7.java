package string;

public class string7 {
    public static void main(String[] args) {
        StringBuilder s = new StringBuilder("hello");
        char[] a ={'a','b','c'};
        s.append(a);
        s.append("\nhello");
        System.out.println(s);
        

    }
}