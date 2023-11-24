import java.util.Scanner;

 class area_of_circle {
    float r;

    void input(float radius) {
        r = radius;

    }

    double find_area() {
        double area;
        area = 3.141 * r * r;
        return area;
    }

    void display() {
        double res = find_area();
        System.out.println("area of the circle is= " + res);

    }

}

 class test_area {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the radius of the circle: ");
        float radius = sc.nextFloat();

        area_of_circle obj = new area_of_circle();
        obj.input(radius);
        obj.display();
    }
}
