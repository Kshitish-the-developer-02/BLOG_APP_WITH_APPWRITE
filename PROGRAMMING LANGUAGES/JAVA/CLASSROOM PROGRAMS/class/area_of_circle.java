public class area_of_circle {
    double r;

    double input(double n) {
        r = n;
        return find_area();
    }

    double find_area() {
        double area;
        area = 3.14 * r * r;
        return area;
    }
}
