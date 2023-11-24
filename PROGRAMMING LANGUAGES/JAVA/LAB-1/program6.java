public class program6 {
    public static void main(String[] args) {

        int num = 24;
        int i;

        System.out.println(" factors of " + num + " are:  ");
        for (i = 1; i <= num; i++) {
            if (num % i == 0) {
                System.out.println(i);
            }
        }
    }

}
