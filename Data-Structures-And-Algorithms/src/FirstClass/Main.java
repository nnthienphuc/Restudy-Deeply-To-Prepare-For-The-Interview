package FirstClass;

public class Main {
    public static void main(String[] args) {
        // Create an Animal object
        Animals myAnimal = new Animals("Lion", 5, "Panthera leo");

        // Display the animal's details
        myAnimal.displayDetails();

        // Modify some attributes
        myAnimal.setName("Tiger");
        myAnimal.setAge(6);
        myAnimal.setSpecies("Panthera tigris");

        // Display the updated details
        System.out.println("\nUpdated Animal Details:");
        myAnimal.displayDetails();
    }
}

