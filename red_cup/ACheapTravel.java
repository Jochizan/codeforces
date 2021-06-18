package red_cup;

import java.io.PrintWriter;
import java.util.Scanner;

public class ACheapTravel {
    public void solve(int testNumber, Scanner in, PrintWriter out) {
        int n = in.nextInt(), m = in.nextInt(), a = in.nextInt(), b = in.nextInt();

        int res = (int) Math.ceil((double) n / m);
        int one = n * a;
        int two = res * b;
        int three = (res - 1) * b + (n - m * (res - 1)) * a;

        out.println(Math.min(one, Math.min(two, three)));
    }
}
