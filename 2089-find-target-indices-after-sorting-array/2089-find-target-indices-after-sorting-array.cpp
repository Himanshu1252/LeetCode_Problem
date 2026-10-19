class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int count = 0;
        int num = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<target){
                count++;
            }
            if(nums[i]==target){
                num++;
            }
        }
        vector<int> ans;
        for(int i=count;i<count+num;i++){
            ans.push_back(i);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna