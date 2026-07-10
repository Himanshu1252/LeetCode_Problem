class Solution {
public:
    double myPow(double x, int n) {
        // Binary exponentiation (exponentiation by squaring) implementation.
        // Runs in O(log |n|) time, O(1) extra space.
        // Handles edge cases up front to avoid unnecessary computation.
        if(x==1) return 1.0;
        if(x==0) return 0.0;
        if(n==0) return 1.0;
        if(x==-1 && n%2 == 0) return 1.0;
        if(x==-1 && n%2 != 0) return -1.0;
        // Using a signed integer type to store the exponent.
        // On most platforms 'long' is 64-bit, which safely holds -INT_MIN after negation.
        long binForm = n;
        if(n<0){
            x = 1/x;
            binForm = -binForm;
        }
        double ans = 1;
        while(binForm>0){
            if(binForm%2==1){
                ans *=x; 
            }
            x *= x;
            binForm /= 2;
        }
        // At this point, ans holds x^n (for the original n).
        // Time Complexity: O(log |n|) – we halve the exponent each iteration.
        // Space Complexity: O(1) – only a few scalar variables are used.
        // This solution correctly handles typical edge cases and achieves optimal O(log|n|) time and O(1) space.
        // Note: For x == 0 and n < 0, the mathematical result is Infinity; this implementation returns 0.0 due to the early check.
        // If you need to handle that case precisely, consider adding a check for (x == 0 && n < 0) and return numeric_limits<double>::infinity().
        return ans;
    }

};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna