class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      if(nums.size() == 0){
        return 0;
      }
      int j = 0;
      for(int i=1;i<nums.size();i++){
        if(nums[i] != nums[j]){
            j++;
            nums[j]=nums[i];
        }
      }
      return j+1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna