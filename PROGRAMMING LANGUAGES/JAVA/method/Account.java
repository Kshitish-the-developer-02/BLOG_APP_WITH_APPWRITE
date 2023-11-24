public class Account {
    private int account_no;
    private String customer_name;
    private int balance;

    public Account() {
        account_no = 0;
        customer_name = "";
        balance = 0;
    }

    public void deposite(int amount) {
        balance = balance + amount;
        System.out.println("Deposite successfull. current balance:  " + balance);
    }

    public void withdraw(int amount) {
        if (balance >= amount) {
            balance = balance - amount;
            System.out.println("withdrawl successful.Current balance:  " + balance);
        } else {
            System.out.println("insufficient balance. Withdrwal failed");
        }
    }

    public void display() {
        System.out.println("Account no: " + account_no);
        System.out.println("Customer name:  " + customer_name);
        System.out.println("Balance:  " + balance);

    }

    public static void main(String[] args) {
        Account ac = new Account();
        ac.account_no = 1234567890;
        ac.customer_name = "kshitish kumar nayak";
        ac.display();
        ac.deposite(1000);
        ac.withdraw(500);

    }

}
