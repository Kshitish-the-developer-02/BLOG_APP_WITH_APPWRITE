interface anonymous_class {
     void display();
}


public class anonymous_main {
    public static void main(String[] args) {
         anonymous_class obj=new  anonymous_class(){

        public void display(){
            System.out.println("this is a anonymous class program..");
        }

        };
    obj.display();
    }
}
