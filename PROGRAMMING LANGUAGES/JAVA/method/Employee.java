public interface Employee {
    void get_sallary();
}

class Developer implements Employee{
    @Override
    public void get_sallary(){
        System.out.println("salary of the developer :50000");
    }
}

class Manager implements Employee{
    @Override
    public void get_sallary(){
        System.out.println("sallary of the manager :  650000");
    }
}



