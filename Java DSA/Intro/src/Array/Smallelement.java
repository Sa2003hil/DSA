package Array;

import java.util.Scanner;

public class Smallelement {

    static void getElement(int[] arr, int n) {
        int small = Integer.MAX_VALUE;
        int secSmall = Integer.MAX_VALUE;

        int large = Integer.MIN_VALUE;
        int secLarge = Integer.MIN_VALUE;

        for (int i = 0; i < n; i++) {
            small = Math.min(small, arr[i]);
            large = Math.max(large, arr[i]);
        }

        for (int i = 0; i < n; i++) {
            if (arr[i] < secSmall && arr[i] != small) {
                secSmall = arr[i];
            }

            if (arr[i] > secLarge && arr[i] != large) {
                secLarge = arr[i];
            }
        }

        System.out.println("Smallest element: " + small);
        System.out.println("Second Smallest element: " + secSmall);
        System.out.println("Largest element: " + large);
        System.out.println("Second Largest element: " + secLarge);
    }

    public static void main(String[] args) {
        int[] arr;
        try (Scanner sc = new Scanner(System.in)) {
            int n = sc.nextInt();
            arr = new int[n];

            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }

            getElement(arr, n);
        }
    }
}
