package IO;

import java.io.File;
import java.util.Scanner;

public class ReadData {
    public static void main(String[] args) throws Exception{
        // File file = new File("scores.txt");
        Scanner input = new Scanner(new File("scores.txt"));
        while(input.hasNext()){
            String firstName = input.next();
            String m = input.next();
            String lastName = input.next();
            int score = input.nextInt();
            System.out.println(firstName+ ' '+m+' '+lastName+' '+score);
        }
        input.close();
    }
}