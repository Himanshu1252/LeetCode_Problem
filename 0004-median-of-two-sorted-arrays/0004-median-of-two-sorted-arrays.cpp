class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // double ans = 0;
        // for(int n : nums2){
        //     nums1.push_back(n);
        // }
        // sort(nums1.begin(),nums1.end());
        // int len = nums1.size();
        // if(len%2 == 0){
        //     ans = (nums1[len/2]+nums1[(len/2)-1])/2.0;
        // }
        // else{
        //     ans = nums1[len/2];
        // }
        // return ans;
        int n = nums1.size(),m = nums2.size();
        int num[n+m];
        double ans = 0;
        int i = 0,j = 0,k=0;
        while(i< nums1.size() && j<nums2.size()){
            if(nums1[i]<nums2[j]){
                num[k] = nums1[i];
                i++;
                k++;
            }
            else{
                num[k] = nums2[j];
                j++;
                k++;
            }
        }
        while(i<nums1.size()){
            num[k] = nums1[i];
            i++;
            k++;
        }
        while(j<nums2.size()){
            num[k] = nums2[j];
            j++;
            k++;
        }
        int len = n+m;
        if(len%2 == 0){
            ans = (num[len/2]+num[(len/2)-1])/2.0;
        }
        else{
            ans = num[len/2];
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna