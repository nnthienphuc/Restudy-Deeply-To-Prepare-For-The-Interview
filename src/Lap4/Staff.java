package Lap4;

public class Staff extends Officer {
    private String task;
    
    public Staff() {
        super();
        task = "";
    }

    public Staff (String fullName, String gender, String address, String task) {
        super(fullName, gender, address);
        this.task = task;
    }

    public void setTask (String task) {
        this.task = task;
    }

    public String getTask () {
        return this.task;
    }

    @Override
    public String toString () {
        return "Staff{" + "Full name = " + fullName + ", gender = " + gender + ", address = " + address + ", task = " + task + "}\n"; 
    }
}
