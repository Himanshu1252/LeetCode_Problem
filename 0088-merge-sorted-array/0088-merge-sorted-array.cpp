class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0;
        int j = 0;
        while(i<nums1.size() && j<n){
            if(nums1[i] != 0){
                i++;
            }
            else{
                nums1[i] = nums2[j++];
            }
        }
        sort(nums1.begin(),nums1.end());
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna