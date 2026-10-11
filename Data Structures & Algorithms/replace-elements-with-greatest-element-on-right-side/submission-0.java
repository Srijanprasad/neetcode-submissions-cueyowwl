// import java.util.stream.IntStream;
// import java.util.*;

class Solution {
    public int[] replaceElements(int[] arr) {
        int[] result = new int[arr.length];

        IntStream.iterate(arr.length - 1, i -> i >= 0, i -> i - 1)
            .reduce(-1, (maxRight, i) -> {
                result[i] = maxRight;
                return Math.max(maxRight, arr[i]);
            });

        return result;
    }
}
