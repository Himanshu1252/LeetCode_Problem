class Solution {
public:
    int numberOfSteps(int num) {
        int step = 0;
        while(num>0){
            if(num%2==0){
                num = num/2;
                step++;
            }
            else{
                num -= 1;
                step++;
            }
        }
        return step;
    }
};
// ✅ Correct solution but not optimal
// Time Complexity: O(n) where n is the value of the input number
// Space Complexity: O(1)
// 
// Optimal approach insight:
// The number of steps corresponds to:
// - Number of bits in binary representation (excluding leading 1) → division steps
// - Number of 1's in binary representation → subtraction steps
// 
// For example: 6 (110) → 4 steps (2 bits + 2 ones - 1)
// Optimal solution can achieve O(log n) time using bit manipulation:
// return num ? (32 - __builtin_clz(num) - 1 + __builtin_popcount(num)) : 0;

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna