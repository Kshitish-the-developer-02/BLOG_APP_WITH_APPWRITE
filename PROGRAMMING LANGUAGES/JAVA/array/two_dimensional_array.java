public class two_dimensional_array {
    public static void main(String[] args) {
        int[][] m = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
        double sum = 0.0;

        for (int i = 0; i < m.length; i++) {
            for (int j = 0; j < m[i].length; j++) {
                System.out.print(m[i][j] + " ");
                sum=sum+m[i][j];
            }
            System.out.print("\n");

        }

        System.out.println("sum is= " + sum);

    }

}
