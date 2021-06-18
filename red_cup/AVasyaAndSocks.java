package red_cup;

import java.io.PrintWriter;
import java.util.Scanner;

public class AVasyaAndSocks {
    public void solve(int testNumber, Scanner in, PrintWriter out) {
        int n = in.nextInt(), m = in.nextInt(), count = 0, answer;
        answer = n;

        while (n != 0) {
            count++;

            if (count == m) {
                count = 0;
                answer++;
                n++;
            }

            n--;
        }

        out.println(answer);
    }
}
