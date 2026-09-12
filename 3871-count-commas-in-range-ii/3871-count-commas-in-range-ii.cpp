class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0;
        long long p = 1000;

        while (p <= n) {
            ans += n - p + 1;

            if (p > LLONG_MAX / 1000)
                break;

            p *= 1000;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna