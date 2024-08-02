// import java.util.Scanner;

import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class App {

    public static int[] Duplicates(int[] arr, int n) {
        Set<Integer> uniqueElements = new HashSet<>();
        for (int num : arr) {
            uniqueElements.add(num);
        }

        int[] uniqueArray = new int[uniqueElements.size()];

        int index = 0;
        for (int num : uniqueElements) {
            uniqueArray[index++] = num;
        }

        return uniqueArray;
    }

    public static void main(String[] args) {
        int[] arr;
        try (Scanner sc = new Scanner(System.in)) {
            int n = sc.nextInt();
            arr = new int[n];

            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }

            // System.out.print(Duplicates(arr, n));

            int[] uniqueElements = Duplicates(arr, n);

            for (int num : uniqueElements) {
                System.out.print(num + " ");
            }
        }
    }
}
