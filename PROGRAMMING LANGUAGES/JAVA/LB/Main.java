public class Main {
    public static void main(String[] args) {
        Circle circle1 = new Circle(5.0);
        Circle circle2 = new Circle(7.5);

        double area1 = circle1.getArea();
        double area2 = circle2.getArea();

        System.out.println("Area of Circle 1: " + area1);
        System.out.println("Area of Circle 2: " + area2);

        int result = Circle.compareAreas(circle1, circle2);
        if (result < 0) {
            System.out.println("Circle 1 has a smaller area than Circle 2");
        } else if (result > 0) {
            System.out.println("Circle 1 has a larger area than Circle 2");
        } else {
            System.out.println("Circle 1 has the same area as Circle 2");
        }
    }
}