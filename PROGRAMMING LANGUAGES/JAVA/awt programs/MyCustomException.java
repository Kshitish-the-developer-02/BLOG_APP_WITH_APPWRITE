public class MyCustomException extends Exception {
    public MyCustomException(String message){
        super(message);
    }

    public static void main(String[] args) {
        try{
            int age=-5;
            if(age<0){
                throw new MyCustomException("age cannot be negative..");
            }

        }
        catch(MyCustomException e){
            System.out.println("custom exception caught"+e.getMessage());
        }
    }

}
