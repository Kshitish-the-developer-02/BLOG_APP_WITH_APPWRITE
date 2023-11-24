public class rectangle:shape{
    public int width{get;set;}
    public int height{get;set;}
@override
    public int getarea(){
        return height*width;
    }

}
