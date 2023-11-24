import java.util.Scanner;

public class palindrome {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.print("enter a number to check if it is palindrome number or not:  ");
        int num = sc.nextInt();

        int temp = num;

        int rev = 0;
        while (num > 0)

        {
            int rem = num % 10;
            rev = (rev * 10) + rem;
            num = num / 10;

        }

        if (temp == rev) {
            System.out.println(temp + " is a palindrome number");
        } else {
            System.out.println(temp + " is not a palindrome number");
        }

    }

}
