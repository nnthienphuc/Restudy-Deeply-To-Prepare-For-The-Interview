package Java.Formatting;

public class FormattingExample {
    public static void main(String[] args) {
        // Biến số nguyên
        int i = 1234;
        System.out.printf("Số nguyên: %d\n", i); // Số nguyên: 1234

        // Biến số dấu phẩy động
        double d = 123.456789;
        System.out.printf("Số dấu phẩy động: %.2f\n", d); // Số dấu phẩy động: 123.46

        // Canh trái và chiều rộng
        System.out.printf("Canh trái: %-10d!\n", i); // Canh trái: 1234      !

        // Thêm dấu cộng vào số dương
        System.out.printf("Số với dấu cộng: %+d\n", i); // Số với dấu cộng: +1234

        // Thêm các số 0 vào bên trái
        System.out.printf("Đệm số 0: %05d\n", i); // Đệm số 0: 01234

        // Số dấu phẩy động với độ chính xác và chiều rộng
        System.out.printf("Số dấu phẩy động (rộng 10, 2 chữ số sau dấu thập phân): %10.2f\n", d); // Số dấu phẩy động (rộng 10, 2 chữ số sau dấu thập phân):     123.46

        // Định dạng khoa học
        System.out.printf("Định dạng khoa học: %e\n", d); // Định dạng khoa học: 1.234568e+02

        // Số nguyên hệ thập lục phân
        System.out.printf("Số hệ thập lục phân: %x\n", i); // Số hệ thập lục phân: 4d2

        // Chuỗi
        String s = "Hello";
        System.out.printf("Chuỗi: %s\n", s); // Chuỗi: Hello

        // Canh phải chuỗi với chiều rộng
        System.out.printf("Chuỗi canh phải (rộng 10): %10s\n", s); // Chuỗi canh phải (rộng 10):      Hello

        // In dấu phần trăm
        System.out.printf("Dấu phần trăm: %%\n"); // Dấu phần trăm: %
        System.out.printf("%d%%", i);
    }
}