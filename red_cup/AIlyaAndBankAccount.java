package red_cup;

import java.io.PrintWriter;
import java.util.Scanner;

public class AIlyaAndBankAccount {
    public void solve(int testNumber, Scanner in, PrintWriter out) {
        long money = in.nextLong();
        if (money >= 0) {
            out.println(money);
        } else {
            String lts = String.valueOf(money);
            String one = lts.substring(0, lts.length() - 1);
            String two = lts.substring(0, lts.length() - 2) + lts.substring(lts.length() - 1);

            long first = Long.parseLong(one);
            long second = Long.parseLong(two);

            out.println(Math.max(first, second));
        }
    }
}
