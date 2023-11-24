public class transpose_of_a_matrix {
    public static void main(String[] args) {
        int[][] m = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };

        System.out.println("original matrix is:  ");
        for (int i = 0; i < m.length; i++) {
            for (int j = 0; j < m[i].length; j++) {
                System.out.print(m[i][j] + " ");

            }
            System.out.print("\n");

        }

        System.out.println("Transpose matrix is:  ");
        for (int i = 0; i < m.length; i++) {
            for (int j = 0; j < m[i].length; j++) {
                System.out.print(m[j][i] + " ");

            }
            System.out.print("\n");

        }

    }

}
