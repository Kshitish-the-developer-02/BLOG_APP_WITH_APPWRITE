//program for print first 10 fibbonacci series

// public abstract class fibbonacci_series_without_using_recurssion {
//     public static void main(String[] args) {
//         int num1 = 0;
//         int num2 = 1;
//         int num3;
//         int i, count = 10;
//         System.out.print(num1 + "\t" + num2);

//         for (i = 2; i < count; i++) {
//             num3 = num1 + num2;
//             System.out.print("\t" + num3);
//             num1 = num2;
//             num2 = num3;

//         }

//     }

// }

import java.util.Scanner;

public abstract class fibbonacci_series_without_using_recurssion {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num1 = 0;
        int num2 = 1;
        int num3;
        int i;

        System.out.print("enter how many number of fibbonacci number you want to print: ");
        int count=sc.nextInt();
        System.out.print(num1 + "\t" + num2);

        for (i = 2; i < count; i++) {
            num3 = num1 + num2;
            System.out.print("\t" + num3);
            num1 = num2;
            num2 = num3;

        }

    }

}
