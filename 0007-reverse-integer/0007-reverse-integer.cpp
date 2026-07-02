class Solution {
public:
    int reverse(int x) {
        int rev = 0;
    while(x!=0){
        int rem = x%10; //last digit 
        if((rev>INT_MAX/10) || (rev<INT_MIN/10)){
            return 0;
        }
        rev = (rev * 10) + rem;
        x = x/10;
    }
    return rev;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna