public class linear_search {
    public static void main(String[] args) {
        int arr[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };

        System.out.println("array is: ");
        for (int i = 0; i < arr.length; i++) {
            System.out.println(" " + arr[i]);

        }

        int key = 50;

        for (int i = 0; i < arr.length; i++) {
            if (key == arr[i]) {
                System.out.println(" key found at position number:  " + (i + 1));
                System.out.println(" key found at index number:  " + i);
            }
        }
    }
}
