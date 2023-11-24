
public class constructor_overloading {
    String name;
    int age;

    //default constructor with no parameter
    public constructor_overloading(){
        name="kshitish";
        age=21;
    }
    //constructor with name parameter
    public constructor_overloading(String name){
        this.name=name;
        age=22;
    }
    //constructor with name and age parameter
    public constructor_overloading(String name,int age){
        this.name=name;
        this.age=age;
    }
    public void displayinfo(){
        System.out.println("name:  "+name+" age: "+age);
    }

    public static void main(String[] args) {
        constructor_overloading obj1=new constructor_overloading();
        constructor_overloading obj2=new constructor_overloading("akash");
        constructor_overloading obj3=new constructor_overloading("soumya",23);

        obj1.displayinfo();
        obj2.displayinfo();
        obj3.displayinfo();
        
    }
}
