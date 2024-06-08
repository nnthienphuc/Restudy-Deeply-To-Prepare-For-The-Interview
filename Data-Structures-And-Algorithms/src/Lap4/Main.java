package Lap4;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner scanner = new Scanner(System.in);
        OfficerManagement officerManagement = new OfficerManagement();
        while (true) {
            System.out.println("Officer Management Application");
            System.out.println("------------------------------");
            System.out.println("1. Insert new officer.");
            System.out.println("2. Search officers by name.");
            System.out.println("3. Show all officers.");
            System.out.println("4. Exit.");
            Short choice = scanner.nextShort();
            scanner.nextLine();
            switch (choice) {
                case 1: {
                    System.out.println("Select roles:");
                    System.out.println("a. Staff");
                    System.out.println("b. Worker");
                    System.out.println("c. Engineer");
                    String c = scanner.nextLine();
                    switch (c) {
                        case "a": {
                            System.out.println("Enter full name: ");
                            String fullName = scanner.nextLine();
                            System.out.println("Enter the gender: ");
                            String gender = scanner.nextLine();
                            System.out.println("Enter the address: ");
                            String address = scanner.nextLine();
                            System.out.println("Enter the task: ");
                            String task = scanner.nextLine();
                            Officer staff = new Staff(fullName, gender, address, task);
                            officerManagement.addOfficer(staff);
                            break;
                        }
                        case "b": {
                            System.out.println("Enter full name: ");
                            String fullName = scanner.nextLine();
                            System.out.println("Enter the gender: ");
                            String gender = scanner.nextLine();
                            System.out.println("Enter the address: ");
                            String address = scanner.nextLine();
                            System.out.println("Enter the level: ");
                            Short level = scanner.nextShort();
                            Officer worker = new Worker(fullName, gender, address, level);
                            officerManagement.addOfficer(worker);
                            break;
                        }
                        case "c": {
                            System.out.println("Enter full name: ");
                            String fullName = scanner.nextLine();
                            System.out.println("Enter the gender: ");
                            String gender = scanner.nextLine();
                            System.out.println("Enter the address: ");
                            String address = scanner.nextLine();
                            System.out.println("Enter the brand: ");
                            String brand = scanner.nextLine();
                            Officer engineer = new Engineer(fullName, gender, address, brand);
                            officerManagement.addOfficer(engineer);
                            break;
                        }
                        default: {
                            System.out.println("Invalid choice.");
                            break;
                        }
                    }
                    break;
                }
                case 2: {
                    try {
                        System.out.println("Enter name to find: ");
                        String name = scanner.nextLine();
                        officerManagement.searchByName(name).forEach(officer -> System.out.println(officer.toString()));
                    }
                    catch (Exception e) {
                        System.out.println("Empty list!");
                    }
                    break;
                }
                case 3: {
                    try {
                        officerManagement.showFullOfficers();
                    }
                    catch (Exception e) {
                        System.out.println("Empty list!");
                    }
                    break;
                }
                case 4: {
                    System.out.println("Goodbye!");
                    scanner.close();
                    break;
                }
                default: {
                    System.out.println("Invalid choice.");
                    break;
                }
            }
        }
    }
}
