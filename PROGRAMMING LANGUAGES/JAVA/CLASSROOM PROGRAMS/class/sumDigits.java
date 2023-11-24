public class sumDigits {
    int num;
    int res;

    void input(int n) {
        num = n;
    }

    int find_sum() {
        int rem = 0;
        int sum = 0;
        while (num != 0) {
            rem = num % 10;
            sum = sum + rem;
            num = num / 10;
        }
        return sum;
    }

    void display() {
        res = find_sum();
        System.out.println("sum of digits:  " + res);
    }

}