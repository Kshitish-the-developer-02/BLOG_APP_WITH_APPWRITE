interface flyable {
    void fly();
}


interface swimmable {
    void swim();
}

public class bird  implements  flyable,swimmable{
    public void fly(){
        System.out.println("bird flies");
    }
    public void swim(){
        System.out.println("bird swims");
    }

    public static void main(String[] args) {
        bird b=new bird();
        b.fly();
        b.swim();
    }

}
