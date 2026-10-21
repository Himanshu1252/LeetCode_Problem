class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // vector<int> freq(nums.size(),0);
        // for(int i=0;i<nums.size();i++){
        //     freq[nums[i]]++;
        // }
        // for(int i=0;i<nums.size();i++){
        //     if(freq[i]>1){
        //         return i;
        //     }
        // }
        // return -1;


        // using slow fast pointer
        int slow = nums[0], fast = nums[0];
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow!=fast);

        slow = nums[0];
        while(slow != fast){
           slow =  nums[slow];
           fast =  nums[fast];
        }
        return slow;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna