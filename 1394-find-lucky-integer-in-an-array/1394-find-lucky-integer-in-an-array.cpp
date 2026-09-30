class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n = arr.size();
        vector<int> freq(501);
        for(int i=0;i<n;i++){
            freq[arr[i]]++;
        }
        int max = 0;
        for(int i=freq.size()-1;i>0;i--){
            if(freq[i] == i && i>0){
                return i;
            }
        }
        return -1;
    }
};