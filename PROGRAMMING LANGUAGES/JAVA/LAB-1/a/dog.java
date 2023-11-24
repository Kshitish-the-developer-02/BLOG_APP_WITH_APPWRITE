package a;


public class animal {
    String species;
    animal(String species){
        this.species=species;
    }
}

public class dog  extends  animal{
    String eat;
    dog(String species,String eat){
        super(species);
        this.eat=eat;
    }
    void display(){
        System.out.println("the species od dog is "+species+"and dog eat"+eat);
    }

    public static void main(String[] args) {
        dog d=new dog("xyz","meat");
        d.display();

    }

}
