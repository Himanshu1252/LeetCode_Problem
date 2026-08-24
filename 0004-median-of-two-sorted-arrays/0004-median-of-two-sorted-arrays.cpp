class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int n = nums1.size();
        int m = nums2.size();

        vector<int> num(n + m);

        double ans = 0;

        int i = 0, j = 0, k = 0;

        while (i < nums1.size() && j < nums2.size()) {

            if (nums1[i] < nums2[j]) {
                num[k] = nums1[i];
                i++;
                k++;
            }
            else {
                num[k] = nums2[j];
                j++;
                k++;
            }
        }

        while (i < nums1.size()) {
            num[k] = nums1[i];
            i++;
            k++;
        }

        while (j < nums2.size()) {
            num[k] = nums2[j];
            j++;
            k++;
        }

        int len = n + m;

        if (len % 2 == 0) {
            ans = (num[len / 2] + num[(len / 2) - 1]) / 2.0;
        }
        else {
            ans = num[len / 2];
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna