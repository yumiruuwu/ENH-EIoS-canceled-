import java.util.Scanner;

public class Random {
    public static void main(String args[]) {
        Scanner minInput = new Scanner(System.in);
        int min;
        System.out.println("Minimum:");
        min = minInput.nextInt();

        Scanner maxInput = new Scanner(System.in);
        int max;
        System.out.println("Maximum:");
        max = maxInput.nextInt();
        
        int random_int = (int)Math.floor(Math.random()*(max-min+1)+min);
        System.out.println("Random value in int from "+min+" to "+max+":" + " " + random_int);
    }
}