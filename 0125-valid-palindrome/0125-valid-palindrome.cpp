class Solution {
public:
    bool isPalindrome(string s) {
        int target = 1;
        if(s.empty()){
            return true;
        }
        for (int i = 0; i < s.length(); i++) {
            s[i] = tolower(s[i]);
        }
        int i = 0,j=s.length()-1;
        while(i<=j){
            if (!isalnum(s[i])) {
                i++;
            }
            else if (!isalnum(s[j])) {
                j--;
            }
            else{
                if(s[i] == s[j]){
                    target = 1;
                }else{
                    target = 0;
                    break;
                }
                i++;
                j--;
            }
        }
        if(target == 1){
            return true;
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna