// import java.util.Scanner;

public class TestMultipleCatchBlock {
    public static void main(String[] args) {
        // Scanner sc = new Scanner(System.in);
        // System.out.println("enter the size of the array: ");
        // int n;
        // n=sc.nextInt();
        // int arr[]=new int[n];

        // System.out.println("enter value into the array: ");
        // for(int i=0;i<n;i++){
        // arr[i]=sc.nextInt();

        // }
        // System.out.println("array is: ");
        // for(int i=0;i<n;i++){
        // System.out.println(" "+arr[i]);
        // }

        try {
            int a[] = new int[5];
            a[5] = 30 / 0;

        } catch (ArithmeticException e) {
            System.out.println("arithmatic exception occurs:  ");
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("arrayindexoutofbound exception occurs:  ");
        } catch (Exception e) {
            System.out.println("parent exceptionoccurs:  ");
        }
        System.out.println("rest of the code");
    }

}
