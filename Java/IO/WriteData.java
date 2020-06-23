package IO;

import java.io.PrintWriter;

public class WriteData {
    public static void main(String[] args) throws Exception {
        // File file = new File("scores.txt");
        // if(file.exists()){
        //     System.out.println("文件已存在");
        //     System.exit(0);
        // }
        PrintWriter output = new PrintWriter("scores.txt");
        output.print("joooo t k ");
        output.println(31313);
        output.print("hello f lom ");
        output.println(30);
        output.close();

    }
}