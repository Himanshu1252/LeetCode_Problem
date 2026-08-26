class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        vector<int> kelement;
        for(int i=0;i<101;i++){
            kelement.push_back(k*(i+1));
        }
        int i = 0,j=0;
        while(j<nums.size()){
            if(kelement[i]!=nums[j]){
                j++;
            }
            else{
                i++;
                j = 0;
            }
        }
        return kelement[i];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna