package red_cup;

import java.util.Arrays;
import java.util.Scanner;
import java.io.PrintWriter;

public class AGravityFlip {
    public void solve(int testNumber, Scanner in, PrintWriter out) {
        int n = in.nextInt();
        int [] arr = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = in.nextInt();
        }

        Arrays.sort(arr);

        for (int i = 0; i < n; i++) {
            out.println(arr[i]);
        }
    }
}
