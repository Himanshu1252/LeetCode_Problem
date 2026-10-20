class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int start = 0, end = matrix[0].size()-1;
        while(start < matrix.size() && end >= 0){
            if(target == matrix[start][end]){
                return true;
            }
            else if(target < matrix[start][end]){
                end--;
            }
            else{
                start++;
            }
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna