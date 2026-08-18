class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        int j = nums.size();

        sort(nums.begin(), nums.end());

        int i = 0;
        int num = 1;

        while (num <= j) {
            if (i < j && nums[i] == num) {
                i++;
                num++;
            }
            else if (i < j && nums[i] < num) {
                i++;
            }
            else {
                ans.push_back(num);
                num++;
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna