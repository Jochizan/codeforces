package red_cup;

import java.util.Scanner;
import java.io.PrintWriter;

public class AExpression {
    public void solve(int testNumber, Scanner in, PrintWriter out) {
        int a = in.nextInt(), b = in.nextInt(), c = in.nextInt();

        int one = a + b * c;
        int two = a * (b + c);
        int three = a * b * c;
        int four = a * b + c;
        int five = (a + b) * c;
        int six = a + b + c;

        int ans = Math.max(one, Math.max(two, Math.max(three, Math.max(four, Math.max(five, six)))));

        out.println(ans);
    }
}
