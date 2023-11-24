public class constructcalling {
    int p;
    int q;

    constructcalling(int p, int q) {
        this.p = p;
        this.q = q;
    }
    constructcalling(){
        this(10, 20);
        System.out.println("parametrized constructor calling");
    }
    void display(){
        System.out.println(p+" "+q);
    }
    public static void main(String[] args) {
        constructcalling d=new constructcalling();
        d.display();
        
    }

}
