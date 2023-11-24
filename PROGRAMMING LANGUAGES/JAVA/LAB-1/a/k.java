//class 1 parent class
public class parent {
    void show(){
        System.out.println("parent show method is called");
    }

}

//class 2 child class
public class child extends  parent {
    void show(){
        System.out.println("child show method called");
    }

}

//main class
public class tyepacsting_main {
    public static void main(String[] args) {
        parent obj=new child();//(here we creating parent class object but referencing
                               //it to child class show child class show() method called
        obj.show();
    }
}
