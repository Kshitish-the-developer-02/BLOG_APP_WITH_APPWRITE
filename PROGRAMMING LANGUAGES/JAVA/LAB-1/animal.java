//example of using super to access superclass membners.
public class animal {
    void sound(){
        System.out.println("animal makes more sound..");
    }
}


public class dog  extends animal{
    void sound(){
        super.sound();  //print the message of sound method of superclass animal
        System.out.println("dog barks");
    }

    public static void main(String[] args) {
        dog d=new dog();
        d.sound();
    }
}
