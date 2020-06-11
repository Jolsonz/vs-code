import javax.swing.JOptionPane;
public class Gui{
    public static void main(String[] args) {
        //调用gui显示一个窗口
        // JOptionPane.showMessageDialog(null, "我是你爹","你好",JOptionPane.INFORMATION_MESSAGE);
        // Scanner input = new Scanner(System.in);
        String input = JOptionPane.showInputDialog("输入符号", "默认值");//这个方法有多个调用
        input = JOptionPane.showInputDialog("输入符号");
        input = JOptionPane.showInputDialog(null,"提示信息","窗口标题",JOptionPane.QUESTION_MESSAGE);
        System.out.print(input);
    }
}