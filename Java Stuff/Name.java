import java.util.Scanner;

public class Name {
    public static void main(String[] args) {
        Scanner firstNameInput = new Scanner(System.in);
        String firstName;
        System.out.println("Please enter your first name:\nEX: Nguyen");
        firstName = firstNameInput.nextLine();

        Scanner middleNameInput = new Scanner(System.in);
        String middleName;
        System.out.println("Please enter your middle name (if you have):\nEX:Trong Hieu");
        middleName = middleNameInput.nextLine();

        Scanner lastNameInput = new Scanner(System.in);
        String lastName;
        System.out.println("Please enter your last name:\nEX: Duc");
        lastName = lastNameInput.nextLine();

        if(middleName.isEmpty()) {
            System.out.println(firstName + " " + lastName);
        } else {
            System.out.println(firstName + " " + middleName + " " + lastName);
        }
    }
}