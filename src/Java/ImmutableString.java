package Java;

import java.io.*;

class ImmutableString{
    public static void main(String[] args)
    {
        String s = "nnthienphuc";
        s.concat(" Nao To");
        System.out.println("First print: " + s);

        
        String welcome = "Hello";
        welcome = welcome.concat(" World!");
        System.out.println("Second print: " + welcome);

        String str1 = "Phuc";
        String str2 = "Phuc";
        String str3 = new String("Phuc");

        // Kết quả sẽ là true vì str1 và str2 đều tham chiếu đến cùng một đối tượng trong String Pool
        System.out.println("Third print: " + (str1 == str2));

        // Kết quả sẽ là false vì str3 tham chiếu đến một đối tượng mới được tạo trong heap memory
        System.out.println("Fourth print: " + (str1 == str3));
    }
}