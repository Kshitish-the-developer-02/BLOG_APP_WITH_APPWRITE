
import java.util.Scanner;
public class simple_array_display {
    

    public static void main(String[] args) {
        int arr[] = new int[20];
        int n;
        System.out.print("enter the size of the array:  ");
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();

        System.out.println("enter the values into the array");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.println("array is");
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");

        }
    }

}

