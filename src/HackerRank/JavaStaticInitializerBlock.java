// https://www.hackerrank.com/challenges/java-static-initializer-block/problem?isFullScreen=true

package HackerRank;

import java.util.Scanner;

public class JavaStaticInitializerBlock {
    private static short B;
    private static short H;
    private static boolean flag = false;
    static Scanner sc = new Scanner(System.in);
    
    static {
        B = sc.nextShort();
        H = sc.nextShort();
        if (B > 0 && H > 0)
            flag = true;
        else
            System.out.println("java.lang.Exception: Breadth and height must be positive");
        sc.close();
    }

public static void main(String[] args){
		if(flag){
			int area=B*H;
			System.out.print(area);
		}
	}
}