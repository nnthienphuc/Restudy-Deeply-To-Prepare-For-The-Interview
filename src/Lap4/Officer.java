package Lap4;

public class Officer {
    protected String fullName = "";
    protected String gender = "";
    protected String address = "";
    
    public Officer() {
        fullName = "";
        gender = "";
        address = "";
    }

    public Officer(String fullName, String gender, String address) {
        this.fullName = fullName;
        this.gender = gender;
        this.address = address;
    }

    public void setFullName (String fullName) {
        this.fullName = fullName;
    }

    public void setGender (String gender) {
        this.gender = gender;
    }

    public void setAddress (String address) {
        this.address = address;
    }

    public String getFullName () {
        return this.fullName;
    }

    public String getGender () {
        return this.gender;
    }

    public String getAddress () {
        return this.address;
    }
}
