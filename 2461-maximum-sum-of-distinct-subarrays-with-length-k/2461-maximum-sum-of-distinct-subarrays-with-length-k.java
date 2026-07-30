import java.util.HashMap;

class Solution {
    public long maximumSubarraySum(int[] nums, int k) {

        HashMap<Integer, Integer> map = new HashMap<>();

        long sum = 0;
        long maxsum = 0;

        // First window
        for (int i = 0; i < k; i++) {
            sum += nums[i];
            map.put(nums[i], map.getOrDefault(nums[i], 0) + 1);
        }

        if (map.size() == k) {
            maxsum = sum;
        }

        // Slide the window
        for (int i = k; i < nums.length; i++) {

            sum += nums[i];
            map.put(nums[i], map.getOrDefault(nums[i], 0) + 1);

            
            sum -= nums[i - k];
            map.put(nums[i - k], map.get(nums[i - k]) - 1);

            if (map.get(nums[i - k]) == 0) {
                map.remove(nums[i - k]);
            }

            if (map.size() == k) {
                maxsum = Math.max(maxsum, sum);
            }
        }

        return maxsum;
    }
}