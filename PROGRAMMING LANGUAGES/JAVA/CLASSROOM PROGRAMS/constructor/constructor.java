public class constructor {
    int x;
    char c;

    constructor() {
    }

    constructor(int x1, char c1) {
        x = x1;
        c = c1;
    }

    constructor(constructor con) {
        x = con.x;
        c = con.c;
    }

    void display() {
        System.out.println(x + " " + c);
    }

}
