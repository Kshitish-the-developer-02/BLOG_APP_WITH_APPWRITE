import java.util.Scanner;

class test_student {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("ente full mark");
        double fullmark = sc.nextDouble();

        System.out.println("enter the mark of the student");
        double stdmark = sc.nextDouble();

        student obj = new student();
        obj.input(fullmark, stdmark);
        obj.display();

    }

}
