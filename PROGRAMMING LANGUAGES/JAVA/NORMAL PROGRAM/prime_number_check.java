import java.util.Scanner;

public class prime_number_check {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int flag = 0;
        System.out.print("enter a number to be cheked whether it is prime or  not:   ");
        int num = sc.nextInt();

        if (num == 0 || num == 1) {
            System.out.println(num + " is not a prime number");
        } else {
            for (int i = 2; i < num / 2; i++) {
                if (num % i == 0) {
                    System.out.println(num + " is  not a prime number ");
                    flag = 1;
                    break;
                }

            }
            if (flag == 0) {
                System.out.println(num + " is a prime number");
            }

        }
    }

}
