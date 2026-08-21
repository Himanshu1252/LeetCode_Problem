class Solution {
private:
    int  x(char ch){
        switch(ch){
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
        }
        return 0;
    }
public:
    int romanToInt(string s) {
        vector<int> num;
        for(int i=0;i<s.size();i++){
            num.push_back(x(s[i]));
        }
        int ans = 0, n = num.size();
        for(int i = 0; i < n-1; i++){
            if(num[i]<num[i+1]){
                ans -= num[i];
            }
            else{
                ans += num[i];
            }
        }
        ans += num[n-1];
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna