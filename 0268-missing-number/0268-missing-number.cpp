class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        for(int i=0;i<=n;i++){
            bool found = false;

            for(int j=0;j<n;j++){
                if(nums[j]==i){
                    found = true;
                    break;
                }
            }
            if(!found){
                return i;
            }
        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna