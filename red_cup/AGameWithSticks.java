package red_cup;

import java.util.Scanner;
import java.io.PrintWriter;

public class AGameWithSticks {
    public void solve(int testNumber, Scanner in, PrintWriter out) {
        int n = in.nextInt(), m = in.nextInt();
        int min = Math.min(n, m);

        out.println(min % 2 == 0 ? "Malvika" : "Akshat");
    }
}
