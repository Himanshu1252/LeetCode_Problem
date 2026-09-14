class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        for(int i = 0;i < arr.size(); i++){
            if(arr[i] == 0){
                for(int j = arr.size()-1; j > i; j--){
                    arr[j] = arr[j-1];
                }
                if(i+1<arr.size()){
                    arr[i+1]=0;
                }
                i++;
            }
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna