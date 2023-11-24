public class NestedTryBlock{
		public static void main(String [] args){
                           try{
			       int[]numbers={1,2,3,4,5};
			       System.out.println(numbers[5]);
                           
				try{
				    int result=10/0;
				}
		  		catch(ArithmeticException e){
				      System.out.println("Inner catch block");
				      System.out.println(e);
				}
			    }
			    catch(ArrayIndexOutOfBoundsException e){
			         System.out.println("outer catch block");
				 System.out.println(e);
			    }
               
			     
                }
}