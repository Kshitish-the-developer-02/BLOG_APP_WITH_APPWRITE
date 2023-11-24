public class initialize_array_different_way {
    public static void main(String[] args){
        int n[]=new int[3];
        n[0]=10;
        n[1]=20;
        n[3]=40;

        for(int c:n)
        {
            System.out.println(" "+c);
        }
    }
    
}
