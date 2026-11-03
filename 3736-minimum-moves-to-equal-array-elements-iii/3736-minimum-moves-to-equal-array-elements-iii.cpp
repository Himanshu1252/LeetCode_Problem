class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int max = INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]>max){
                max = nums[i];
            }
        }
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