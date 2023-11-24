import java.util.Scanner;

public class factorial_by_without_recurssion {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("enter a number to find its facorial:  ");
        int num = sc.nextInt();

        int fact = 1;
        int i;

        for (i = 1; i <= num; i++) {
            fact = fact * i;
        }

        System.out.println(num + " factorial is = " + fact);

    }

}
