import java.util.Scanner;
public class sum_array {

    public static int even_sum(int arr[]){
        int sum=0;
        for(int i=0;i<arr.length;i++){
            if(arr[i]%2==0){
                sum=sum+arr[i];
            }
        }
        return sum;
    }
    public static int odd_sum(int arr[]){
        int sum=0;

        for(int i=0;i<arr.length;i++){
            if(arr[i]%2!=0){
                sum=sum+arr[i];
            }
        }
        return sum;


    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the size of the array: ");
        int size=sc.nextInt();

        int arr[]=new int[size];
        System.out.println("enter the values into the array:  ");
        for(int i=0;i<size;i++)
        {
            arr[i]=sc.nextInt();
        }

        int x=even_sum(arr);
        int y=odd_sum(arr);

        System.out.println("sum of even number is= "+x);
        System.out.println("sum of odd number is= "+y);

    }
}
