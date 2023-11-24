//create a frame with extends Frame class
import java.awt.*;
public class frame1 extends Frame{
    frame1(){
             Button b=new Button("Button");
             b.setBounds(50,50,50,50);
             add(b);
	     setSize(300,200);
	     setTitle("this is a Button create of frame program");
	     setLayout(new FlowLayout());
	     setVisible(true);
    }

    public static void main(String[] args){
             frame1 f=new frame1();
    }
    
}