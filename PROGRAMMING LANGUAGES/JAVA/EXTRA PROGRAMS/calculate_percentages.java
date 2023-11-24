import java.util.Scanner;

public class calculate_percentages {

    public static void main(String[] args) {
        System.out.print("Total marks is=");
        int total_marks = 600;
        System.out.println(total_marks);
        Scanner s = new Scanner(System.in);
        System.out.println("enter the marks of Maths ");
        int a = s.nextInt();
        System.out.println("enter the marks of English ");
        int b = s.nextInt();
        System.out.println("enter the marks of Physics ");
        int c = s.nextInt();
        System.out.println("enter the marks of Chemistry ");
        int d = s.nextInt();
        System.out.println("enter the marks of Biology ");
        int e = s.nextInt();
        System.out.println("enter the marks of IT ");
        int f = s.nextInt();
        float total = a + b + c + d + e + f;
        System.out.print("total marks of a student is =");
        System.out.println(total);
        float per = (total / total_marks) * 100;
        System.out.print("percentage of student is= ");
        System.out.println(per);

    }
}
