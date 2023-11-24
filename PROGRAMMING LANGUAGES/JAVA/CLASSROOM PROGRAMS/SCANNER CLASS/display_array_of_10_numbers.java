import java.util.Scanner;

public class display_array_of_10_numbers {
    static int min_value(int[] arr) {
        int min = arr[0];
        for (int i = 1; i < arr.length; i++) {
            if (arr[i] < min) {
                min = arr[i];
            }
        }
        return min;

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the size of the array:  ");
        int size = sc.nextInt();

        int[] arr = new int[size];
        System.out.println("enter values into the array: ");
        for (int i = 0; i < size; i++) {
            arr[i] = sc.nextInt();
        }
        int res = min_value(arr);
        System.out.println("minimum value in the array is: " + res);
    }

}