public class program_8 {
    public static void main(String[] args) {

        int num = 157;
        int rev = 0;
        int temp = num;
        while (num > 0) {
            int rem = num % 10;
            rev = (rev * 10) + rem;
            num = num / 10;
        }

        System.out.println(" reverse of " + temp + " is = " + rev);

    }

}
