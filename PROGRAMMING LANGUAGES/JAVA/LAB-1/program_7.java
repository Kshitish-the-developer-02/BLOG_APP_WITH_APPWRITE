public class program_7 {
    public static void main(String[] args) {

        int num = 5;
        int flag = 0;

        if (num == 1) {
            System.out.println(num + " is not a prime number");
        }

        for (int i = 2; i < num / 2; i++) {
            if (i % 2 == 0) {
                System.out.println(num + " is not a prime number ");
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            System.out.println(num + " is a prime number");
        }
    }

}
