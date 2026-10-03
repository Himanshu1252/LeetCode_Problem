class Solution {
public:
    void sortColors(vector<int>& nums) {
        // int n = nums.size();
        // int c0 = 0,c1 = 0,c2 = 0;
        // for(int i=0;i<n;i++){
        //     if(nums[i]==0){
        //         c0++;
        //     }
        //     else if(nums[i]==1){
        //         c1++;
        //     }
        //     else if(nums[i]==2){
        //         c2++;
        //     }
        // }
        // for(int i=0;i<c0;i++){
        //     nums[i]=0;
        // }
        // for(int i=c0;i<c0+c1;i++){
        //     nums[i]=1;
        // }
        // for(int i=c0+c1;i<c0+c1+c2;i++){
        //     nums[i]=2;
        // }




        // dutch national flag algo
        int low = 0, mid = 0, high = nums.size()-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[high],nums[mid]);
                high--;
            }
        }   
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna