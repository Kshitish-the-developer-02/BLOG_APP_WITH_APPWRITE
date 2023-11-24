public class instance_variable {
    String name; // instance variable

    public static void main(String[] args) {
        instance_variable var1 = new instance_variable();
        var1.name = "kshitish";
        System.out.println(var1.name);

        instance_variable var2 = new instance_variable();
        var2.name = "Nibedita";
        System.out.println(var2.name);

    }
}
