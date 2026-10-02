class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i = 0;
        int j = nums.size() - 1;

        while(i <= j) {
            int mid = i + (j - i) / 2;

            if(nums[mid] == target) {
                return mid;
            }

            // Left half sorted
            if(nums[i] <= nums[mid]) {

                // Target left sorted half me hai
                if(nums[i] <= target && target < nums[mid]) {
                    j = mid - 1;
                }
                else {
                    i = mid + 1;
                }
            }

            // Right half sorted
            else {

                // Target right sorted half me hai
                if(nums[mid] < target && target <= nums[j]) {
                    i = mid + 1;
                }
                else {
                    j = mid - 1;
                }
            }
        }

        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna