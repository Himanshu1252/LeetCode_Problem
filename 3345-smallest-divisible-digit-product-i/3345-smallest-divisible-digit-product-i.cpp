class Solution {
public:
    int smallestNumber(int n, int t) {
        while(true){
            int multi = 1;
            int temp = n;
            while(temp != 0){
                int last = temp%10;
                multi *= last;
                temp /= 10;
            }
            if(multi % t == 0){
                return n;
            }
            n++;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna