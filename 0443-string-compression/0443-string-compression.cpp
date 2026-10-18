class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int ind = 0;
        for(int i=0;i<n;i++){
            char ch = chars[i];
            int count = 0;

            while(i<n && chars[i] == ch){
                count++;
                i++;
            }

            if(count ==1){
                chars[ind++] = ch;
            }
            else{
                chars[ind++] = ch;
                string str = to_string(count);
                for(char dig: str){
                    chars[ind++] = dig;
                }
            }
            i--;
        }
        chars.resize(ind);
        return ind;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna