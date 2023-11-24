import java.util.Scanner;

public class fibbonacci_series_using_recurssion {
    static int num1 = 0, num2 = 1, num3 = 0;

    static void print_fibbonacci(int count) {

        if (count > 0) {
            num3 = num1 + num2;
            num1 = num2;
            num2 = num3;
            System.out.print("\t" + num3);

            print_fibbonacci(count - 1);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("enter how many number you want to print:  ");
        int count = sc.nextInt();

        System.out.print(num1 + "\t" + num2);

        print_fibbonacci(count - 2);

    }

}
