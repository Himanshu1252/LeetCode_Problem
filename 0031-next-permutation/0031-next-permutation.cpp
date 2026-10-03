class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // find pivot element
        int n = nums.size();
        int pivot = -1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                pivot = i;
                break;
            }
        }
        if(pivot == -1){
            return reverse(nums.begin(),nums.end());
        }

        // find next larger element
        for(int i=n-1;i>=0;i--){
            if(nums[i]>nums[pivot]){
                swap(nums[i],nums[pivot]);
                break;
            }
        }
        // reverse (pivot+1 to n-1)
        int i= pivot+1,j=n-1;
        while(i<=j){
            swap(nums[i],nums[j]);
                i++;
                j--;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna