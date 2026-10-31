class Solution {
private:
    int binarySearch(vector<int>& arr,int target,int st, int end){
        if(st<=end){
            int mid = st+(end-st)/2;

            if(arr[mid] == target) return mid;

            else if(arr[mid] <= target){
                return binarySearch(arr,target,mid+1,end);
            }

            else{
                return binarySearch(arr,target,st,mid-1);
            }
        }
        return -1;
    }
public:
    int search(vector<int>& arr, int target) {
        return binarySearch(arr,target,0,arr.size()-1);




        // int i = 0, j = nums.size()-1;
        // while(i<=j){
        //     int mid = i+(j-i)/2;
        //     if(nums[mid]==target){
        //         return mid;
        //     }
        //     else if(nums[mid]>target){
        //         j = mid-1;
        //     }
        //     else{
        //         i = mid+1;
        //     }
        // }
        // return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna