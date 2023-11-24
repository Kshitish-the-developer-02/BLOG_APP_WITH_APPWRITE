public class test_try_catch1 {
    public static void main(String[] args) {
        try {
            int data = 50 / 0;
            System.out.println("rest of the code....." + data);
        } catch (ArithmeticException e) {
            System.out.println(e);
            System.out.println("a number by o is not divided");
        }
    }

}