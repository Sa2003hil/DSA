package Array;

import java.util.Scanner;

public class Kaprekar {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int k = sc.nextInt();
            isKaprekar(k);
        }
    }

    static boolean isKaprekar(int k) {
        if (k == 1)
            return true;

        // Count number of digits in square
        int sq_n = k * k;
        int count_digits = 0;

        while (sq_n != 0) {
            count_digits++;
            sq_n /= 10;
        }

        sq_n = k * k; // Recompute square as it was changed

        for (int r_digit = 1; r_digit < count_digits; r_digit++) {
            int eq_parts = (int) Math.pow(10, r_digit);

            if (eq_parts == k)
                continue;

            int sum = sq_n / eq_parts + sq_n % eq_parts;
            if (sum == k)
                return true;
        }
        return false;
    }
}
