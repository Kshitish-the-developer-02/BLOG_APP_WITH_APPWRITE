 class class_sum_digit {
    int num;
    int res;

    void input(int n) {
        num = n;
    }

    int find_sum() {
        int rem;
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
        System.out.println("sum of a number is = " + res);
    }

}

class test_sum {
    public static void main(String[] args) {
        int num = 123;
        class_sum_digit obj = new class_sum_digit();
        obj.input(num);
        obj.display();

    }
}
