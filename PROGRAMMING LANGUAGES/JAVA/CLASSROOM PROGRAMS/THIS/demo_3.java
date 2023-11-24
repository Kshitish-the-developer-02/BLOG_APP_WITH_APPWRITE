public class demo_3 {
    int p;
    int q;

    int get_p() {
        return p;
    }

    int get_q() {
        return q;
    }

    void set_p(int p1) {
        p = p1;
    }

    void set_q(int q) {
        this.q = q;
    }

    public static void main(String[] args) {
        demo_3 d = new demo_3();
        int r = d.get_p();
        // System.out.println(r);
        d.set_p(10);
        System.out.println(r);

        int r1 = d.get_q();
        // System.out.println(r1);
        d.get_q();
        System.out.println(r1);

    }

}
