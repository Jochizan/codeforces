package red_cup;

import java.io.PrintWriter;
import java.util.Scanner;

public class CGivenLengthAndSumOfDigits {
    public void solve(int testNumber, Scanner in, PrintWriter out) {
        int n = in.nextInt(), s = in.nextInt();
        int sum = s - 1;

        if (s == 0 && n != 1 || s > 9 * n) {
            out.println("-1 -1");
            return;
        }

        String one_answer = "", two_answer = "";

        for (int i = 0; i < n; i++) {
            one_answer += Math.min(9, s);
            s -= Math.min(9, s);
        }

        for (int i = 0; i < n - 1; i++) {
            two_answer = Math.min(9, sum) + two_answer;
            sum -= Math.min(9, sum);
        }

        two_answer = (sum + 1) + two_answer;
        out.println(two_answer + " " + one_answer);
    }


}
