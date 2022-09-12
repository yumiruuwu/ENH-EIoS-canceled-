import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner double_input = new Scanner(System.in);
    double myDouble;
    //System.out.println("Enter a value for Double:\n(Remember value must end with d)");
    System.out.println("Enter a value for Double:");
    myDouble = double_input.nextDouble();

    Scanner float_input = new Scanner(System.in);
    float myFloat;
    //System.out.println("Enter a value for Float:\n(Remember value must end with f)");
    System.out.println("Enter a value for Float:");
    myFloat = float_input.nextFloat();

    int myInt = (int) myDouble;
    int my2ndInt = (int) myFloat;

    System.out.println("Please wait...");
    System.out.println("\n\nDouble:");
    System.out.println(myDouble + "\n" + myInt + "\n");

    System.out.println("Float:");
    System.out.println(myFloat + "\n" + my2ndInt);
  }
}