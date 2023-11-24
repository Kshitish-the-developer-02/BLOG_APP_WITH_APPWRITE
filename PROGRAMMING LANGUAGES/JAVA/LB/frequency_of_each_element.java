import java.util.Scanner;

public class frequency_of_each_element {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the size of the array:  ");
        int size = sc.nextInt();

        int arr[] = new int[size];
        int freq[] = new int[arr.length];

        System.out.println("enter the values into the array:  ");
        for (int i = 0; i < size; i++) {
            arr[i] = sc.nextInt();

        }

        int visit = -1;
        // freq[i] = -1;

        for (int j = 0; j < arr.length; j++) {
            int cnt = 1;

            for (int i = j + 1; i < arr.length; i++) {
                if (arr[i] == arr[j]) {
                    cnt++;
                    freq[i] = visit;
                }

            }
            if (freq[j] != visit) {
                freq[j] = cnt;

            }

        }

        System.out.println("frequency is:  ");
        for (int j = 0; j < size; j++) {
            if (arr[j] != 0) {
                System.out.println(" frequency of  " + arr[j] +" "+ freq[j]);
            }
        }

    }

}
