class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        for(int i=0;i<m;i++){
            nums2.push_back(nums1[i]);
        }
        sort(nums2.begin(), nums2.end());
        int start=0;
        int end=m+n-1;
        if((m+n-1)%2==0){
            int mid=start+(end-start)/2;
            return nums2[mid];
        }
        else{
             int mid=start+(end-start)/2;
             float ans=(nums2[mid]+nums2[mid+1])/float(2);
             return ans;
        }
        return 0;

            
        
    }
};