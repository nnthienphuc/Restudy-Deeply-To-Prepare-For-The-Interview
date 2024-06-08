package Lap4;

import java.util.ArrayList;
import java.util.List;
import java.util.stream.Collectors;

public class OfficerManagement {
    private List<Officer> officers;
    
    public OfficerManagement() {
        this.officers = new ArrayList<>();
    }

    public void addOfficer (Officer officer) {
        this.officers.add(officer);
    }

    public List<Officer> searchByName (String name) {
        return this.officers.stream().filter(officer -> officer.getFullName().toLowerCase().contains(name.toLowerCase())).collect(Collectors.toList());
    }

    public List<Officer> getOfficers() {
        return this.officers;
    }

    public void showFullOfficers () {
        this.officers.forEach(officer -> System.out.print(officer.toString()));
    }
}
