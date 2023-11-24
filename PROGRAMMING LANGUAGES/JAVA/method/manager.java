
class Manager implements Employee {
    public void get_sallary() {
        System.out.println("sallary of the manager :  650000");
    }
}
public class Main{
    public static void main(String[] args) {
        Developer dev=new Developer();
        Manager mng=new Manager();
    
        dev.get_sallary();
        mng.get_sallary();
        
    }

}