public class program_9 {

    public static void main(String[] args) {
        int num = 5;
        int i;
        int fact = 1;

        for (i = 1; i <= num; i++) {
            fact = fact * i;
        }
        System.out.println("factorial of " + num + " is = " + fact);

    }

}
