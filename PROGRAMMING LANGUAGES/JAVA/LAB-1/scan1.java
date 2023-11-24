import java.util.Scanner;

public class scan1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("enter number 1:   ");
        int a = sc.nextInt();
        System.out.print("enter number 2:   ");
        int b = sc.nextInt();

        int sum = a + b;
        System.out.println("sum of and b is:  " + sum);
    }

}
