import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class AccountBalanceGUI extends JFrame {

    private JTextField acNoField, custNameField, balanceField, currentDateField;
    private JComboBox<String> bankNameComboBox;
    private JTextArea resultTextArea;

    public AccountBalanceGUI() {
        setTitle("Account Balance GUI");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setSize(400, 400);

        initComponents();
        createLayout();
    }

    private void initComponents() {
        acNoField = new JTextField(15);
        custNameField = new JTextField(15);
        balanceField = new JTextField(15);
        currentDateField = new JTextField(15);

        String[] bankNames = {"Bank A", "Bank B", "Bank C"}; // Add your bank names here
        bankNameComboBox = new JComboBox<>(bankNames);

        JButton submitButton = new JButton("Submit");
        submitButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                displayResult();
            }
        });

        resultTextArea = new JTextArea(10, 30);
        resultTextArea.setEditable(false);
    }

    private void createLayout() {
        JPanel panel = new JPanel(new GridBagLayout());
        GridBagConstraints gbc = new GridBagConstraints();
        gbc.gridx = 0;
        gbc.gridy = 0;
        gbc.insets = new Insets(5, 5, 5, 5);
        gbc.anchor = GridBagConstraints.WEST;

        panel.add(new JLabel("Ac no:"), gbc);
        gbc.gridx++;
        panel.add(acNoField, gbc);

        gbc.gridx = 0;
        gbc.gridy++;
        panel.add(new JLabel("Cust Name:"), gbc);
        gbc.gridx++;
        panel.add(custNameField, gbc);

        gbc.gridx = 0;
        gbc.gridy++;
        panel.add(new JLabel("Bank Name:"), gbc);
        gbc.gridx++;
        panel.add(bankNameComboBox, gbc);

        gbc.gridx = 0;
        gbc.gridy++;
        panel.add(new JLabel("Balance:"), gbc);
        gbc.gridx++;
        panel.add(balanceField, gbc);

        gbc.gridx = 0;
        gbc.gridy++;
        panel.add(new JLabel("Current Date:"), gbc);
        gbc.gridx++;
        panel.add(currentDateField, gbc);

        gbc.gridx = 0;
        gbc.gridy++;
        gbc.gridwidth = 2;
        panel.add(submitButton, gbc);

        gbc.gridx = 0;
        gbc.gridy++;
        panel.add(new JScrollPane(resultTextArea), gbc);

        add(panel);
    }

    private void displayResult() {
        String acNo = acNoField.getText();
        String custName = custNameField.getText();
        String bankName = bankNameComboBox.getSelectedItem().toString();
        String balance = balanceField.getText();
        String currentDate = currentDateField.getText();

        String displayText = "Ac no: " + acNo + "\nCust Name: " + custName +
                             "\nBank Name: " + bankName + "\nBalance: " + balance +
                             "\nCurrent Date: " + currentDate;

        resultTextArea.setText(displayText);
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            public void run() {
                new AccountBalanceGUI().setVisible(true);
            }
        });
    }
}