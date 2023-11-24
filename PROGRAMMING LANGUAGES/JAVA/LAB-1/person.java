
public class person {
    // data members
    String name;
    int age;

    // methods
    void sayhello() {
        System.out.println("hello my name is " + "and i am " + age + "years old");
    }
}

public class person_main {
    public static void main(String[] args) {
        // creating object of the person class
        person person1 = new person();
        person person2 = new person();

        person1.name = "kshitish";
        person1.age = 21;
        person1.name = "Nibedita";
        person1.age = 21;
        person1.sayhello();
        person2.sayhello();

    }
}
