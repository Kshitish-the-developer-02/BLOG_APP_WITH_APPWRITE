public class array_traverse {
    public static void main(String[] args) {
        int n[] = { 10, 20, 30, 40, 50 };
        System.out.println("size of array is = " + n.length);

        System.out.println("array is:");

        // int i = 0;
        // method - 1
        // while (i < n.length) {
        // System.out.print(" " + n[i]);
        // i++;
        // }

        // method - 2
        // for (int i = 0; i < n.length; i++) {
        // System.out.print(" " + n[i]);
        // }

        // method- 3
        for(int c:n)
        {
            System.out.println(" "+c);
        }

    }
}
