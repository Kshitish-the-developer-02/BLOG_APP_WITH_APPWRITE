public class find_average_of_five_numbers {

    static double find_average(int[] arr) {
        int sum = 0;
        double average = 0.0;

        for (int i = 0; i < arr.length; i++) {
            sum = sum + arr[i];
        }
        average = sum / arr.length;
        return average;

    }

    public static void main(String[] args) {
        int[] arr = { 10, 20, 30, 40, 50 };
        double result;

        result = find_average(arr);

        System.out.println("average of array is= " + result);

    }

}
