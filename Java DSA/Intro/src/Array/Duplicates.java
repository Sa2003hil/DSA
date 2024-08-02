package Array;

import java.util.HashSet;
import java.util.Set;

public class Duplicates {
    public static void main(String[] args) {
        int[] arr = { 1, 3, 2, 1, 3, 6 };
        System.out.println("Original array: ");
        printArray(arr);

        int[] uniqueArray = removeDuplicateUsingSet(arr);

        System.out.println("Array after removing Duplicates : ");
        printArray(uniqueArray);

    }

    public static int[] removeDuplicateUsingSet(int[] arr) {
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

    public static void printArray(int[] arr) {
        for (int num : arr) {
            System.out.println(num + " ");
        }
        System.out.println();
    }
}
