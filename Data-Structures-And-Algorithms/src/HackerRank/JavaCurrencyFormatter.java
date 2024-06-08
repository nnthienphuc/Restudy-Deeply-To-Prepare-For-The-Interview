// https://www.hackerrank.com/challenges/java-currency-formatter/problem?isFullScreen=true
package HackerRank;

import java.text.NumberFormat;
import java.util.Locale;
import java.util.Scanner;

public class JavaCurrencyFormatter {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double payment = scanner.nextDouble();
        scanner.close();
        
        Locale lcUs = Locale.US;
        NumberFormat cfUs = NumberFormat.getCurrencyInstance(lcUs);
        String us = cfUs.format(payment);

        Locale lcIn = new Locale("en", "IN");
        NumberFormat cfIn = NumberFormat.getCurrencyInstance(lcIn);
        String india = cfIn.format(payment);

        Locale lcCh = Locale.CHINA;
        NumberFormat cfCh = NumberFormat.getCurrencyInstance(lcCh);
        String china = cfCh.format(payment);

        Locale lcFr = Locale.FRANCE;
        NumberFormat cfFr = NumberFormat.getCurrencyInstance(lcFr);
        String france = cfFr.format(payment);
        
        System.out.println("US: " + us);
        System.out.println("India: " + india);
        System.out.println("China: " + china);
        System.out.println("France: " + france);
    }
}
