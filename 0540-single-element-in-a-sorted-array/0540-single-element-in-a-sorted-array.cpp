class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = n - 1;

        while (i < j) {
            int mid = i + (j - i) / 2;

            // mid ko even index par le aao
            if (mid % 2 == 1) {
                mid--;
            }

            // Pair sahi jagah par hai
            if (nums[mid] == nums[mid + 1]) {
                i = mid + 2;
            }
            else {
                j = mid;
            }
        }

        return nums[i];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna