public class constructor_main {
    public static void main(String[] args) {
        constructor t1=new constructor();
        t1.display();

        constructor t2=new constructor(96,'k');
        t2.display();

        constructor t3=new constructor(t2);
        t3.display();
    }

}
