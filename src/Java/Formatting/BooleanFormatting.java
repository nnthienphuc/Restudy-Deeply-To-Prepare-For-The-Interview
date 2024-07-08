package Java.Formatting;

public class BooleanFormatting {
    public static void main(String[] args) {
        int a = 10;
        Boolean b = true, c = false;
        Integer d = null;

        // Fromatting Done using printf
        System.out.printf("%b\n", a);
        System.out.printf("%B\n", b);
        System.out.printf("%b\n", c);
        System.out.printf("%B\n", d);
    }
}
