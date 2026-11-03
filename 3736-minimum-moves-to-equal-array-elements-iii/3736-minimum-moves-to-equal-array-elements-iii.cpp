class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int max = nums[n-1];
        int moves = 0;
        for(int i = 0;i < n;i++){
            moves += abs(max - nums[i]);
        }
        return moves;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna