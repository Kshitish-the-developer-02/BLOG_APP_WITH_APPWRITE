import java.util.Scanner;

public class prime_number_in_array {

    public static void display_Prime_Numbers(int[] arr) {
        for (int number : arr) {
            if (isPrime(number)) {
                System.out.println(number + "  ");
            }
        }
    }

    public static boolean isPrime(int num) {
        if (num <= 1) {
            return false;
        }

        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("enter the size of the array:  ");
        int size = sc.nextInt();
        int arr[] = new int[size];
        System.out.println("enter the values into the array:  ");
        for (int i = 0; i < size; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println("prime numbers are in the array: ");

        display_Prime_Numbers(arr);

    }
}
