public class Multiple_catch_block2 {
    public static void main(String[] args) {
        try {
            int a[] = new int[5];
            System.out.println("print" + a[10]);
        } catch (ArithmeticException e) {
            System.out.println("arithmatic exception occurs:  ");
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("arrayindexoutofbound exception occurs:  ");
        } catch (Exception e) {
            System.out.println("parent exceptionoccurs:  ");
        }
        System.out.println("rest of the code");
    }
}
