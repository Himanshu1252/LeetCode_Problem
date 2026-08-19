class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans = 0;
        for(int n : nums2){
            nums1.push_back(n);
        }
        sort(nums1.begin(),nums1.end());
        int len = nums1.size();
        if(len%2 == 0){
            ans = (nums1[len/2]+nums1[(len/2)-1])/2.0;
        }
        else{
            ans = nums1[len/2];
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna