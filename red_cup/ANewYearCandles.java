package red_cup;

import java.io.PrintWriter;
import java.util.Scanner;

public class ANewYearCandles {
    public void solve(int testNumber, Scanner in, PrintWriter out) {
        int a = in.nextInt(), b = in.nextInt(), count = 0, answer;
        answer = a;

        while (a != 0) {
            count++;

            if (count == b) {
                count = 0;
                answer++;
                a++;
            }

            a--;
        }

        out.println(answer);
    }
}
