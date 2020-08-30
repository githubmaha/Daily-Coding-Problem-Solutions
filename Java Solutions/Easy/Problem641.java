/*
Given a sorted array, find the smallest positive integer that is not the sum of a subset of the array.

For example, for the input [1, 2, 3, 10], you should return 7.

Do this in O(N) time.
*/

class Problem641 {
    private static int findSmallestInteger(int[] arr) {
        int nextSmallestNumThatCannotBeRepresented = 1;

        for(int i : arr) {
            if (i > nextSmallestNumThatCannotBeRepresented) {
               return nextSmallestNumThatCannotBeRepresented ;
            }

            nextSmallestNumThatCannotBeRepresented += i;
        }

        return nextSmallestNumThatCannotBeRepresented;
    }

    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 10};
        System.out.println(findSmallestInteger(arr));

        int[] arr1 = { 1, 3, 4, 5 };
        System.out.println(findSmallestInteger(arr1));

        int[] arr2 = { 1, 2, 6, 10, 11, 15 };
        System.out.println(findSmallestInteger(arr2));

        int[] arr3 = { 1, 1, 1, 1 };
        System.out.println(findSmallestInteger(arr3));

        int[] arr4 = { 1, 1, 3, 4 };
        System.out.println(findSmallestInteger(arr4));
    }
}