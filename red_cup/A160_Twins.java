package red_cup;

import java.util.Arrays;
import java.util.Scanner;

public class A160_Twins {

    private static final Scanner in = new Scanner(System.in);

    public static void main(String[] args) {
        int n = in.nextInt();
        int[] arr = new int[n];

        for (int i = 0; i < arr.length; i++) {
            arr[i] = in.nextInt();
        }

        Arrays.sort(arr);
        int medium = arr.length / 2;

        while (true) {
            int sum_upper = 0, sum_lower = 0;
            for (int i = medium; i < arr.length; ++i) {
                sum_upper += arr[i];
            }

            for (int i = 0; i < medium; ++i) {
                sum_lower += arr[i];
            }

            if (sum_lower >= sum_upper) {
                if (sum_upper + arr[medium - 1] > sum_lower) {
                    medium--;
                    break;
                }
                medium--;
            } else {
                if (sum_lower + arr[medium] < sum_upper) {
                    medium++;
                } else {
                    break;
                }
            }
        }
        System.out.println(arr.length - medium);
    }
}