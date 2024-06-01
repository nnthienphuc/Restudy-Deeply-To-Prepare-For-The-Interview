package FirstClass;

public class Animals {
    // Attributes
    private String name;
    private int age;
    private String species;

    // Constructor
    public Animals(String name, int age, String species) {
        this.name = name;
        this.age = age;
        this.species = species;
    }

    // Getter and Setter methods
    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public String getSpecies() {
        return species;
    }

    public void setSpecies(String species) {
        this.species = species;
    }

    // Method to display animal details
    public void displayDetails() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Species: " + species);
    }
}

