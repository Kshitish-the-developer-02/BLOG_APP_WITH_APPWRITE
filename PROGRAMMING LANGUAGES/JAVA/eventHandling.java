import java.awt.*;
import java.awt.event.*;

public class eventHandling extends Frame implements ActionListener{
        TextField textfield;
        Label label;
   	eventHandling(){
                      textfield=new TextField();
		      textfield.setBounds(60,50,170,20);
		      		       label=new Label("enter Your name: ");

		      Button button=new Button("Show");
		      button.setBounds(90,140,75,40);
     		      button.addActionListener(this);
		      add(textfield);
 		      add(button);
    		      add(label);

		      setSize(300,200);
		      setLayout(null);
		      setVisible(true);
        }
	
	public void actionPerformed(ActionEvent e){
                           textfield.setText("i am kshitish kumar");
        }
      
        public static void main(String[] args){
                                       eventHandling eh=new eventHandling();
        }
}