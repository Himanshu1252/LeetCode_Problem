class Solution {
public:
    set<vector<int>> s;

    void getAllCombinations(vector<int>& arr, int idx, int tar,
                           vector<vector<int>>& ans, vector<int>& combin) {

        if (tar == 0) {
            if (s.find(combin) == s.end()) {
                ans.push_back(combin);
                s.insert(combin);
            }
            return;
        }

        if (idx == arr.size() || tar < 0) {
            return;
        }

        combin.push_back(arr[idx]);

        // Single use: move to next index
        getAllCombinations(arr, idx + 1, tar - arr[idx], ans, combin);

        // Multiple use: stay at same index
        getAllCombinations(arr, idx, tar - arr[idx], ans, combin);

        combin.pop_back();

        // Exclusion: skip current element
        getAllCombinations(arr, idx + 1, tar, ans, combin);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> combin;

        s.clear(); // Reset set

        getAllCombinations(candidates, 0, target, ans, combin);

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna