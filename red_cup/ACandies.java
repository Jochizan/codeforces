package red_cup;

import java.io.PrintWriter;
import java.util.Scanner;

public class ACandies {
    public void solve(int testNumber, Scanner in, PrintWriter out) {
        int t = in.nextInt();

        while (t-- > 0) {
            long res = 1;
            long count = 1;
            long n = in.nextLong();

            while (true) {
                res += Math.pow(2, count);
                count++;

                if (n % res == 0) {
                    out.println(n / res);
                    break;
                }
            }
        }
    }
}
