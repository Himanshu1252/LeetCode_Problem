class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curSum = 0, maxSum = INT_MIN;
        for(int val : nums){
            curSum += val;
            maxSum = max(curSum,maxSum);
            if(curSum<0){
                curSum = 0;
            }
        }
        return maxSum;

        // int maxSum = INT_MIN;
        // for(int i=0;i<nums.size();i++){
        //     int sum = 0;

        //     for(int j=i;j<nums.size();j++){
        //         sum += nums[j];
        //         maxSum = max(sum,maxSum);  
        //     }

        // }
        // return maxSum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna