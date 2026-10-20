class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size(), col = matrix[0].size();
        int srow = 0, erow = row-1;
        int scol = 0, ecol = col-1;
        vector<int> ans;

        while(srow <= erow && scol <= ecol){
            //top
            for(int i=scol;i<=ecol;i++){
                ans.push_back(matrix[srow][i]);
            }
            //right
            for(int i=srow+1;i<=erow;i++){
                ans.push_back(matrix[i][ecol]);
            }
            //bottom
            for(int i=ecol-1;i>=scol;i--){
                if(srow == erow){
                    break;
                }
                ans.push_back(matrix[erow][i]);
            }
            //left
            for(int i=erow-1;i>=srow+1;i--){
                if(scol == ecol){
                    break;
                }
                ans.push_back(matrix[i][scol]);
            }
            srow++;scol++;erow--;ecol--;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna