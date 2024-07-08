package Java.Formatting;
import java.util.*;

public class StringFormatting {
    public static void main(String[] args) {
        String nickName = "nnthienphuc";
        System.out.printf("%s\n", nickName);
        System.out.printf("%S\n", nickName);

        String fullName = "Nguyen Ngoc Thien Phuc";
        System.out.printf("%s\n", fullName);
        System.out.printf("%S\n", fullName);

        String job = "IT";
        System.out.printf("%s\n", job);
        System.out.printf("%S\n", job);
    }
}

// Note: %s là in ra những gì String hoặc char có. %S là uppercase toàn bộ String.
