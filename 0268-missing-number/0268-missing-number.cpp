class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int xor1 = 0,xor2 = 0;
        int a = n-1;
        for(int i=0;i<n;i++){
            xor2 ^= nums[i];
            xor1 ^= (i+1);
        }
        return xor1^xor2;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna