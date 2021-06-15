package red_cup;

import java.util.Arrays;
import java.util.Scanner;
import java.io.PrintWriter;

public class BVanyaAndLanterns {
    public void solve(int testNumber, Scanner in, PrintWriter out) {
        double ans = 0.0;
        int n = in.nextInt(), l = in.nextInt();
        int[] arr = new int[n + 1];

        arr[0] = 0;
        for (int i = 1; i < n + 1; i++) {
            arr[i] = in.nextInt();
        }

        Arrays.sort(arr);

        for (int i = 2; i < n + 1; i++) {
            int i1 = arr[i] - arr[i - 1];
            if (i1 > (int) ans * 2) {
                ans = (double) (i1) / 2;
            }
        }

        if (arr[1] - arr[0] > (int) ans) {
            ans = (double) (arr[1] - arr[0]);
        }

        if (l - arr[arr.length - 1] > (int) ans) {
            ans = (double) (l - arr[arr.length - 1]);
        }

        out.printf("%.10f", ans);
    }
}
