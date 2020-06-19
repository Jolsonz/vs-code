import javax.swing.JOptionPane;
// 用GUI控制循环。
public class p110 {
  public static void main(String[] args) {
      int sum=0;
      int option = 0;//或者JOptionPane.YES_OPTHION
      while( option == 0){
          String dataString = JOptionPane.showInputDialog("输入一个值");
          int data = Integer.parseInt(dataString);
          sum += data;
          option = JOptionPane.showConfirmDialog(null, "continue?");
      }
      JOptionPane.showMessageDialog(null, "the sum is " + sum);
  }
}