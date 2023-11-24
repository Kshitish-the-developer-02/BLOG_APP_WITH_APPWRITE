public class find_average {
    public static void main(String[] args) {
        int n[] = { 10, 20, 30, 40, 50, 60 };
        System.out.println("length of the array is:  " + n.length);
        double sum = 0.0;

        for (int i = 0; i < n.length; i++) {
            sum = sum + n[i];
        }

        double average = sum / n.length;
        System.out.println("average of the integer array is = " + average);

    }

}
