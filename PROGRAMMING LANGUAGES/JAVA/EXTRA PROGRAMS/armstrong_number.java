
public class armstrong_number {
    public static void main(String [] args) {
        int num = 153;
        int temp;
        int cnt = 0;
        double sum = 0.0;

        temp = num;

        while (temp != 0) {
            temp = temp / 10;
            cnt++;
        }

        while (temp != 0) {
            int rem = temp % 10;
            sum = sum +Math. pow(rem, cnt);
            temp = temp / 10;
        }

        if ((int)sum == num) {
            System.out.println(num + " is an armstrong number");
        } else {
            System.out.println(num + " is not an armstrong number");
        }

    }
}