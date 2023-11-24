public class student {
    double fullmark;
    double stdmark;

    void input(double fmark, double smark) {
        fullmark = fmark;
        stdmark = smark;
    }

    void display() {
        double per = (stdmark / fullmark) * 100;

        if (per >= 90) {
            System.out.println("grade A");
        } else if (per >= 80 && per < 90) {
            System.out.println("grade B");
        } else if (per >= 70 && per < 80) {
            System.out.println("grade C");
        } else if (per >= 60 && per < 70) {
            System.out.println("grade D");
        } else if (per >= 50 && per < 60) {
            System.out.println("grade E");
        } else if (per <= 50) {
            System.out.println("FAIL");
        }

    }
}
