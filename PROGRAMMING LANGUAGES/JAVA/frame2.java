//create a frame using instance of the Frame class

import java.awt.*;
public class frame2{
       frame2(){
 		   Frame fr=new Frame();
		   Label label=new Label("userid: ");
                   TextField textfield=new TextField(30);
		   fr.add(label);
                   fr.add(textfield);
		   fr.setSize(300,200);
		   fr.setTitle("frame creation by Frame instance variable");
		   fr.setLayout(new FlowLayout());
                   fr.setVisible(true);

     }
    
     public static void main(String[] args){
              frame2 fr=new frame2();     
     }

}