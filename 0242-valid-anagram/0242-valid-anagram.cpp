class Solution {
public:
    bool isAnagram(string s, string t) {
        // bool ans = false;
        // for(int i=0;i<s.length();i++){
        //     for(int j=0;j<t.length();j++){
        //         if(s[i]==t[j]){
        //             ans = true;
        //             break;
        //         }
        //         else{
        //             ans = false;
        //         }
        //     }
        // }
        // return ans;


        if (s.length() != t.length())
            return false;

        int freq[26] = {0};

        for (int i = 0; i < s.length(); i++) {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0)
                return false;
        }

        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna