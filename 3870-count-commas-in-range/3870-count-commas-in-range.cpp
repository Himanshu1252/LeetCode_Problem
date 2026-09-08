class Solution {
public:
    int countCommas(int n) {
        if(n>999){
            return (n - 1000 + 1);
        }
        else return 0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna