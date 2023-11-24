import javax.swing.*;
public class combobox {
    combobox(){
        JFrame f=new JFrame();
        String array[]={"india","srilanka","america","china","berlin"};

        JComboBox country=new JComboBox(array);
        country.setBounds(50,50,90,20);
        f.add(country);
        f.setVisible(true);
        f.setLayout(null);
        f.setSize(300,200);

    }

    public static void main(String[] args) {
        new combobox();
    }
}
