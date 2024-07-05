// https://www.hackerrank.com/challenges/java-output-formatting/problem?isFullScreen=true
package HackerRank;

import java.util.Scanner;

public class JavaOutputFormatting {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("================================");
        for(int i=0;i<3;i++){
            String s1=sc.next();
            int x=sc.nextInt();
            String tmp = String.valueOf(x).toString();
            if (x < 10)
                tmp = "00" + tmp;
            else if (x < 100)
                tmp = "0" + tmp;
            System.out.printf("%-15s%3s\n", s1 , tmp);
        }
        sc.close();
        System.out.println("================================");
    }
}
