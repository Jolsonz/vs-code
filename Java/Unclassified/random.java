package Unclassified;

import java.util.Random;

// import javax.swing.JOptionPane;
public class random {
  public static void main(final String[] args) {
    final Random a = new Random();
    System.out.print(a.nextInt()+"\n");
    System.out.print(a.nextInt(10));
  }
}