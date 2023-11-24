import java.awt.*;

public class frame1 extends Frame {
    frame1() {
        Button b = new Button("Button!!");

        // setting button position on screen
        b.setBounds(50, 50, 50, 50);

        // adding button into frame
        add(b);

        // Setting Frame width and height
        setSize(500, 300);

        // Setting the title of Frame
        setTitle("This is my First AWT example");

        // Setting the layout for the Frame
        setLayout(new FlowLayout());

        /*
         * By default frame is not visible so
         * we are setting the visibility to true
         * to make it visible.
         */
        setVisible(true);
    }

    public static void main(String args[]) {
        // Creating the instance of Frame
        new frame1();
    }
}
