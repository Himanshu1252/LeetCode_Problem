class Solution {
public:
    string removeOccurrences(string s, string part) {
        int firstIndex;
        while(s.find(part) != string::npos){
            firstIndex = s.find(part);
            s.erase(firstIndex, part.length());
        }
        return s;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna