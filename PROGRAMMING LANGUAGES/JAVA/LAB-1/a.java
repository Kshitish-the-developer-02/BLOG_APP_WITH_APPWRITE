//superclass
public class vehicle {
    void start() {
        System.out.println("vehicle start");
    }
}

//sunclass derived from super class
class car extends vehicle {
    void accelerate() {
        System.out.println("car accelerates");
    }
}

//subclass derived from other subclass
public class sportsCar extends car{
    void race(){
        System.out.println("sports car race begin....");
    }

}
//main function
public class main_car {
    public static void main(String[] args) {
        sportsCar car=new sportsCar();
        car.start();
        car.accelerate();
        car.race();
    }
}




