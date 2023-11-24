public class reverse_array_by_overloading {

    static int[] reverse_array(int[] n) {
        int r[] = new int[n.length];
        int j = 0;
        for (int i = n.length - 1; i >= 0; i--) {
            r[j] = n[i];
            j++;
        }
        return r;
    }

    static double[] reverse_array(double[] d) {
        double r[] = new double[d.length];
        int j = 0;
        for (int i = d.length - 1; i >= 0; i--) {
            r[j] = d[i];
            j++;
        }
        return r;
    }

    public static void main(String[] args) {
        int[] n1 = { 10, 20, 30, 40, 50 };
        int[] res1 = reverse_array(n1);
        double[] n2 = { 1.5, 2.5, 3.0, 5.9 };
        double[] res2 = reverse_array(n2);
        System.out.println("reverse of integer array is:   ");
        for (int i = 0; i < n1.length; i++) {
            System.out.print("  " + res1[i]);
        }
        System.out.println(" ");
        System.out.println("reverse of double array is:   ");
        for (int i = 0; i < n2.length; i++) {
            System.out.print("  " + res2[i]);
        }
    }
}