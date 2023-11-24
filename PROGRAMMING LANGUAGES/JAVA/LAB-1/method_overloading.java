
//method overloading concept
public class mathOperation {
    public int add(int a, int b) {
        return a + b;
    }

    public int add(int a, int b, int c) {
        return a + b + c;
    }

    public double add(double a, double b) {
        return a + b;
    }

    public String add(String a, String b) {
        return a + b;
    }

    public static void main(String[] args) {
        mathOperation obj = new mathOperation();
        int a = obj.add(5, 10);
        int b = obj.add(1, 2, 3);
        double c = obj.add(5.0, 3.6);
        String d = obj.add("kshitish", "kumar");

        System.out.println(a);
        System.out.println(b);
        System.out.println(c);
        System.out.println(d);

    }
}