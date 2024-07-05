package Lap4;

public class Worker extends Officer{
    private short level;

    public Worker() {
        super();
        level = 0;
    }

    public Worker (String fullName, String gender, String address, short level) {
        super(fullName, gender, address);
        this.level = level;
    }

    public void setLevel (short level) {
        this.level = level;
    }

    public short getLevel () {
        return this.level;
    }

    @Override
    public String toString () {
        return "Worker{" + "Full name = " + fullName + ", gender = " + gender + ", address = " + address + ", level = " + level + "}\n";
    }
}
