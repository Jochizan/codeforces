package red_cup;

import java.util.Scanner;
import java.io.PrintWriter;

public class AKefaAndFirstSteps {
    public void solve(int testNumber, Scanner in, PrintWriter out) {
        int n = in.nextInt(), ans = 0, tmp = 1;
        long [] arr = new long[n];

        for (int i = 0; i < arr.length; i++) {
            arr[i] = in.nextLong();
        }

        for (int i = 1; i < arr.length; i++) {
            if (arr[i] >= arr[i - 1]) {
                tmp++;
            } else {
                if (tmp > ans) {
                    ans = tmp;
                }
                tmp = 1;
            }
        }

        if (tmp > ans) {
            ans = tmp;
        }

        out.println(ans);
    }
}
