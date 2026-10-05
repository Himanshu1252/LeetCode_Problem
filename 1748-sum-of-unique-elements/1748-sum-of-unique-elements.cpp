class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        vector<int> freq(101);
        int sum = 0;
        for(int x : nums){
            freq[x]++;
        }
        for(int i=0;i<freq.size();i++){
            if(freq[i] == 1){
                sum += i;
            }
        }
        return sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna