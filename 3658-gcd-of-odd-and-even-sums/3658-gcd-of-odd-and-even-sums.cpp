#include <numeric>
class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumOdd = 0;
        int sumEven = 0;
        for(int i=1;i<=2*n-1;i++){
            if(i%2==0){
                sumEven += i;
            }
            else{
                sumOdd += i;
            }
        }
        int answer = gcd(sumEven,sumOdd);
        return answer;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna