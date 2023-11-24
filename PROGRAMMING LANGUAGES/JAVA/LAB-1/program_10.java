public class program_10 {
    public static void main(String[] args) {
        int num=50;
        
        int i,j;
        System.out.println(" prime numbers between  1 to 50 are: ");
        for ( i = 1; i <= num; i++) {
            int temp = 0;
            for ( j = 1; j <= num; j++) {
                if (i % j == 0) {
                    temp++;
                }

            }
            if (temp == 2) {
                System.out.println(i);
            }

        }

    }
}
