public class stdent {
    String name;
    int roll;
    String sem;
    double mark;

    void input(String x, int r, String s, double m) {
        name = x;
        roll = r;
        sem = s;
        mark = m;
    }
    void display(){
        System.out.println(" ");
        System.out.println("student name is:  "+name);
        System.out.println("student roll number is:  "+roll);
        System.out.println("student  current semester is:  "+sem);
        System.out.println("student secured marks :  "+mark);
        System.out.println(" ");
    }
}
