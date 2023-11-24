import javax.swing.*;
public class panel {
    panel(){
        JFrame f=new JFrame();
        JPanel panel=new JPanel();
        panel.setBounds(40,70,100,100);
        JButton button=new JButton("Jbutton");
        button.setBounds(60,50,80,40);
        panel.add(button);
        f.add(panel);

        f.setSize(300,200);
        f.setLayout(null);
        f.setTitle("jframe panel");
        f.setVisible(true);
    }

    public static void main(String[] args) {
        new panel();
    }
}
