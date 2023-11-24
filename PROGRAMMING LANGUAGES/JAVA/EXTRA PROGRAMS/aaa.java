public class aaa {

     static int[] reverse(int[] p) {
        for (int i = p.length; i >= 0; i--) {
            System.out.println(p[i] + " ");
        }

    }

    public static void main(String[] args) {
        int arr[] = { 10, 20, 30, 40};

        reverse(arr);
    }

}
