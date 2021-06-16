package red_cup;

import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;
import java.io.PrintWriter;

public class ABoredom {

    private static final int mxN = 500500;

    public void solve(int testNumber, Scanner in, PrintWriter out) {
        int n = in.nextInt();
        int[] arr = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = in.nextInt();
        }

        long[] freq = new long[100001];
        for (int i = 0; i < n; i++) {
            freq[arr[i]]++;
        }

        long[][] dp = new long[100001][2];
        dp[1][0] = 0;
        dp[1][1] = freq[1];

        for (int i = 2; i < dp.length; i++) {
            dp[i][0] = Math.max(dp[i - 1][0], dp[i - 1][1]);
            dp[i][1] = dp[i - 1][0] + freq[i] * i;
        }

        out.println(Math.max(dp[100000][0], dp[100000][1]));
    }
}
