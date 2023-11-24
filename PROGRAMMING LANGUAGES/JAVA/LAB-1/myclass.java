
//satic vaiable or class variable
public class myclass {
    static int a=10;
    public static void main(String[] args) {
        System.out.println(a);
    }
    
}

public class instance_variable {
    String name; // instance variable or object-level variable

    public static void main(String[] args) {
        instance_variable var1 = new instance_variable();
        var1.name = "kshitish";
        System.out.println(var1.name);

        instance_variable var2 = new instance_variable();
        var2.name = "Nibedita";
        System.out.println(var2.name);

    }
}



