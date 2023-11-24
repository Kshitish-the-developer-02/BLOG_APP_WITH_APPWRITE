import java.util.Scanner;

public class prime_factors {

    static void calculate_factors(int num){
      for(int i=2;i<=num;i++){
        while(num%i==0){
            System.out.print(i+" ");
               num=num/i;     
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

    

