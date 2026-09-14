class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int w = min(rec1[2],rec2[2]) - max(rec1[0],rec2[0]);
        int h = min(rec1[3],rec2[3]) - max(rec1[1],rec2[1]);
        return w>0 && h>0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna