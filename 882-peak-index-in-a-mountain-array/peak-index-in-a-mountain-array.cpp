class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int starting=1;
        int ending=n-2;
        while(starting<=ending){
            int mid=starting+((ending-starting)/2);
            if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
                return mid;
            }
            else if(arr[mid]<arr[mid-1]){
                ending=mid-1;
            }
            else if(arr[mid]<arr[mid+1]){
                starting=mid+1;
            }
        }
        return 0;
        
        
    }
};