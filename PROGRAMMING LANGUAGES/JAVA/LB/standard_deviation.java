import java.util.Scanner;

class standard_deviation {
    double sum = 0.0;
    double mean = 0.0;
    double squre_difference_sum = 0.0;

    double standardDeviation() {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the size of the array:  ");
        int size = sc.nextInt();
        int arr[] = new int[size];
        System.out.println("enter the values into the array:  ");
        for (int i = 0; i < size; i++) {
            arr[i] = sc.nextInt();
        }
        int length= arr.length;

        for(int num:arr ){
            sum=sum+num;
        }
        mean=sum/length;

        for(int num:arr){
            squre_difference_sum=squre_difference_sum+Math.pow((num-mean),2);
        }
        double variance=squre_difference_sum/length;
        double SD=Math.sqrt(variance);
        return SD;

    }

}