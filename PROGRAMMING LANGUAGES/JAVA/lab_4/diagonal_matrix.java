/*input a 3*3 matrix and store all the diagonal elements in an array and display the array. */

public class diagonal_matrix {

    static int[] copy_array(int[][] arr) {
        int[] arr2 = new int[arr.length];

        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr.length; j++) {
                if (i == j) {
                    arr2[i] = arr[i][j];
                }
            }
        }
        return arr2;

    }

    public static void main(String[] args) {
        int[][] arr = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };

        System.out.println("3*3 matrix is:");
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr.length; j++) {
                System.out.print(" " + arr[i][j]);
            }
            System.out.println();
        }

        int[] result = copy_array(arr);
        System.out.println("after copy elements from 3*3 matix to one dimesional array is: ");
        for (int i = 0; i < result.length; i++) {
            System.out.print(" " + result[i]);
        }

    }

}
