class Solution {
public:
    double myPow(double x, int n) {
        if(x==1) return 1.0;
        if(x==0) return 0.0;
        if(n==0) return 1.0;
        if(x==-1 && n%2 == 0) return 1.0;
        if(x==-1 && n%2 != 0) return -1.0;
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
        return ans;
    }

};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna