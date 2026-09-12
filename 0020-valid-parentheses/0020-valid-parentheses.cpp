class Solution {
public:
    bool isValid(string s) {
        stack<char> bre;
        for(char ch : s){
            if(ch == '(' || ch == '{' || ch == '['){
                bre.push(ch);
            }
            else{
                if(bre.empty()) {
                    return false;
                }
                if((ch == ')' && bre.top() == '(') || 
                    (ch == '}' && bre.top() == '{') ||
                    (ch == ']'&& bre.top() == '[') ){
                        bre.pop();
                }
                else return false;
            }
        }
        return bre.empty();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna