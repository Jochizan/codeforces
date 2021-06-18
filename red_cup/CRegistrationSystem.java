package red_cup;

import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;
import java.io.PrintWriter;

public class CRegistrationSystem {
    public void solve(int testNumber, Scanner in, PrintWriter out) {
        int n = in.nextInt();
        Map<String, Integer> posts = new HashMap<>();

        for (int i = 0; i < n; i++) {
            String str = in.next();

            if (posts.get(str) == null) {
                posts.put(str, 1);
                out.println("OK");
            } else {
                String tmp = str;
                int value = posts.get(str);
                tmp += value;
                posts.put(str, ++value);
                out.println(tmp);
            }
        }
    }
}
