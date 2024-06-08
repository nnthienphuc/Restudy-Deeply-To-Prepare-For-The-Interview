package Lap4;

public class Engineer extends Officer{
    private String brand;

    public Engineer() {
        super();
        brand = "";
    }

    public Engineer (String fullName, String gender, String address, String brand) {
        super(fullName, gender, address);
        this.brand = brand;
    }

    public void setBrand (String brand) {
        this.brand = brand;
    }

    public String getBrand () {
        return this.brand;
    }

    @Override
    public String toString () {
        return "Engineer{" + "Full name = " + fullName + ", gender = " + gender + ", address = " + address + ", brand = " + brand + "}\n";
    }
}
