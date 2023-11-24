import java.util.Scanner;

public class gcd_of_two_numbers {

    static int gcd(int x, int y) {
        while (y != 0) {
            if (x > y) {
                x = x - y;
            } else {
                y = y - x;
            }
        }

        return x;
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.print("enter number 1: ");
        int a = sc.nextInt();
        System.out.print("enter number 2:  ");
        int b = sc.nextInt();

        int result = gcd(a, b);
        System.out.println("gcd of two number is = " + result);

    }

}
