import java.util.Scanner;

public class taking_input {
    public static void main(String[] args) {
        // System.out.println();
        Scanner S = new Scanner(System.in);
        System.out.println("enter number 1 ");
        // int a = S.nextInt();
        float a = S.nextFloat();
        System.out.println("enter number 2 ");
        // int b = S.nextInt();
        float b = S.nextFloat();
        float sum = a + b;

        System.out.println("the sum of a and b is");
        System.out.println(sum);

        // System.out.println(a);

    }

}
