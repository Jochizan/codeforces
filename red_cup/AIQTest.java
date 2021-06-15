package red_cup;

import java.io.PrintWriter;
import java.util.Scanner;

public class AIQTest {
    public void solve(int testNumber, Scanner in, PrintWriter out) {
        int n = in.nextInt(), odd = 0, even = 0, ans = 0;
        int[] arr = new int[n], tmp = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = in.nextInt();

            if (arr[i] % 2 == 0) {
                odd++;
            } else {
                even++;
            }
        }

        if (even == 1 || odd == 1) {
            for (int i = 0; i < n; i++) {
                if (even == 1) {
                    if (arr[i] % 2 == 1) {
                        ans = i + 1;
                    }
                } else {
                    if (arr[i] % 2 == 0) {
                        ans = i + 1;
                    }
                }
            }
        }

        out.println(ans);
    }
}
