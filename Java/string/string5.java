package string;

public class string5 {
    public static void main(String[] args) {
        char[] dst ={'j','a','v','a','1','3','7','0'};
        "cs3720".getChars(2,6,dst,4);
        for(var i:dst)
            System.out.print(i);
    }
}