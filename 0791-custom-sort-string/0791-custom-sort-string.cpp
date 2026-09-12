class Solution {
public:
    string customSortString(string order, string s) {

        string ans = "";
        vector<bool> used(s.size(), false);

        for (int i = 0; i < order.size(); i++) {
            for (int j = 0; j < s.size(); j++) {

                if (!used[j] && order[i] == s[j]) {
                    ans.push_back(s[j]);
                    used[j] = true;
                }
            }
        }

        // Add characters that were not used
        for (int j = 0; j < s.size(); j++) {
            if (!used[j]) {
                ans.push_back(s[j]);
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna