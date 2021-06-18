package red_cup;

import java.util.Scanner;
import java.io.PrintWriter;

public class ANewYearTransportation {
    public void solve(int testNumber, Scanner in, PrintWriter out) {
        int n = in.nextInt(), t = in.nextInt();
        int arr[] = new int[n-1];

        for (int i = 0; i < n - 1; i++) {
            arr[i] = in.nextInt();
        }

        int ok = 0;

        while (ok <= n - 1) {
            if (ok + 1 == t) {
                out.println("YES");
                return;
            } else if (ok + 1 > t) {
                break;
            }

            ok += arr[ok];
        }

        out.println("NO");
    }
}
