import java.util.Scanner;

public class factors {

    public static void calculate_factors(int num){
      for(int i=1;i<=num;i++){
        if(num%i==0){
            System.out.print(i+" ");
        }
      }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("enter a number to find its factors:  ");
        int num = sc.nextInt();
        System.out.print("facors of " + num + " are:  ");
        calculate_factors(num);
    }

}
