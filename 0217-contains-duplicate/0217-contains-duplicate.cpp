class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;

        for(int x : nums) {
            if(s.count(x))
                return true;
            s.insert(x);
        }

        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna