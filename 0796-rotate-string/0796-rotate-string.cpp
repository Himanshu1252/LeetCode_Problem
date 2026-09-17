class Solution {
public:
    bool rotateString(string s, string goal) {
        int n1 = s.size();
        for(int i=0;i<n1;i++){
            char first = s[0];
            for(int i=1;i<n1;i++){
                s[i-1] = s[i];
            }
            s[n1-1] = first;
            if(s==goal){
                return true;
            }
        }
        return false;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna