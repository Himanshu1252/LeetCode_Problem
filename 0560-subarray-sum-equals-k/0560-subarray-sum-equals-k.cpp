class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        vector<int> prifixSum(n, 0);
        prifixSum[0] = nums[0];
        for(int i=1;i<n;i++){
            prifixSum[i] = prifixSum[i-1]+nums[i];
        }
        unordered_map<int, int> m;
        for(int j=0;j<n;j++){
            if(prifixSum[j] == k) count++;

            int val = prifixSum[j] - k;
            if(m.find(val) != m.end()){
                count += m[val];
            }
             
            if(m.find(prifixSum[j]) == m.end()){
                m[prifixSum[j]] = 0;
            }
            m[prifixSum[j]]++;
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna