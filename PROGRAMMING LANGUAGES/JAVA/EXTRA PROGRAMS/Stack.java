import java.util.Scanner;

public class Stack {
    int top;
    int maxSize = 10;
    int[] arr = new int[maxSize];

    boolean isEmpty() {
        return (top < 0);
    }

    Stack() {
        top = -1;
    }

    boolean push(Scanner sc) {
        if (top == maxSize - 1) {
            System.out.println("overflow!!!!");
            return false;
        } else {
            System.out.print("enter value:  ");
            int val = sc.nextInt();
            top++;
            arr[top] = val;
            System.out.println(val + " pushed in stack.");
            return true;
        }
    }

    boolean pop() {
        if (top == -1) {
            System.out.println("underflow!!!!");
            return false;
        }

        else {
            System.out.println(arr[top] + " pooped from the stack.");
            top--;

            return true;
        }
    }

    void display() {
        System.out.print("array elements are:  ");
        for (int i = top; i >= 0; i--) {
            System.out.print(arr[i] + "  ");
        }
    }
}
