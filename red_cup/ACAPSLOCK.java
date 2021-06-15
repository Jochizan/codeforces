package red_cup;

import java.util.Scanner;
import java.io.PrintWriter;

public class ACAPSLOCK {
    public void solve(int testNumber, Scanner in, PrintWriter out) {
        int ans = 1;
        String str = in.next();
        char[] lts = str.toCharArray();

        char ch = Character.toLowerCase(lts[0]);

        if (ch != lts[0]) {
            lts[0] = Character.toLowerCase(lts[0]);
        } else {
            lts[0] = Character.toUpperCase(lts[0]);
        }

        for (int i = 1; i < lts.length; i++) {
            ch = lts[i];
            lts[i] = Character.toLowerCase(lts[i]);

            if (ch == lts[i]) {
                lts[i] = ch;
                ans = 0;
                break;
            }
        }

        if (ans == 1) {
            out.print(String.valueOf(lts));
        } else {
            out.println(str);
        }
    }
}
