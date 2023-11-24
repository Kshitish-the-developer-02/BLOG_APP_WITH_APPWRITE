import java.util.Scanner;

public class Stack_main_function {
    public static void main(String[] args) {
        int flag = 1;
        Scanner sc = new Scanner(System.in);
        Stack s = new Stack();
        System.out.println("******  stack operaions using array********");

        while (flag == 1) {
            System.out.println(" ");
            System.out.println("choose one from the below options: ");
            System.out.println("press 1: PUSH");
            System.out.println("press 2: POP");
            System.out.println("press 3: DISPLAY");
            System.out.println("press 4: EXIT");

            System.out.print("enter your choice: ");
            int choice = sc.nextInt();

            switch (choice) {
                case 1:
                    s.push(sc);
                    break;

                case 2:
                    s.pop();
                    break;

                case 3:
                    s.display();
                    break;

                case 4:
                    System.out.println("EXIT from the program ");
                    flag = 0;
                    break;

                default:
                    System.out.println("please enter valid choice ");

            }

        }

    }

}
