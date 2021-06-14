package red_cup;

import java.util.Arrays;
import java.util.Scanner;

public class A158_Taxi {

    private static final Scanner in = new Scanner(System.in);

    public static void main(String[] args) {
        int n = in.nextInt(), tmp;
        int[] arr = {0, 0, 0, 0, 0};

        while (n-- > 0) {
            tmp = in.nextInt();
            arr[tmp]++;
        }

        int total = arr[4] + arr[3] + arr[2] / 2;
        arr[1] -= arr[3];

        if (arr[2] % 2 == 1) {
            total += 1;
            arr[1] -= 2;
        }

        if (arr[1] > 0) {
            total += (arr[1] + 3) / 4;
        }

        System.out.println(total);
    }
}
