class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int leftHeight = 0,rightHeight = n-1,maxWater = 0;
        while(leftHeight<rightHeight){
           int weight =rightHeight - leftHeight;
           int ht = min(height[leftHeight],height[rightHeight]);
           int area = ht * weight;
           maxWater = max(maxWater,area);
           height[leftHeight]<height[rightHeight] ? leftHeight++ : rightHeight--;
        }
        return maxWater;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna