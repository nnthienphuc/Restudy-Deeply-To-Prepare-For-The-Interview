package Java.Formatting;
import java.io.*; 
import java.util.*; 

public class DateAndTimeFormatting {
    public static void main(String[] args) {
        Date time = new Date();

        System.out.printf("Current Time: %tT\n", time);

        // Another Method with all of them Hour
        // minutes and seconds seperated
        System.out.printf("Hours: %tH  Minutes: %tM Seconds: %tS\n",
                time, time, time);

        // Another Method to print the time
        // Followed by am/pm , time in milliseconds
        // nanoseconds and time-zone offset
        System.out.printf("%1$tH:%1$tM:%1$tS %1$tp %1$tL %1$tN %1$tz %n",
                time);
    }
}