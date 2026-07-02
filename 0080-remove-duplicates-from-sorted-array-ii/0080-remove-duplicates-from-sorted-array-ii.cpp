class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<=2){
            return nums.size();
        }
        int j=2;
        for(int i=2;i<nums.size();i++){
            if(nums[i] != nums[j-2]){
                nums[j]=nums[i];
                j++;
            }
        }
        return j;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna