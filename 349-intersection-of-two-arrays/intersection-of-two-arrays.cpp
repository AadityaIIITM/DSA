class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans={};
        vector<int>leetcode={};
        if(nums1.size()==0){
            return nums2;
        }
        if(nums2.size()==0){
            return nums1;
        }
        if(nums1.size()==0&&nums2.size()==0){
            return {};
        }

        for(int i=0;i<nums1.size();i++){
            for(int m=0;m<nums2.size();m++){
                if(nums1[i]==nums2[m]){
                    ans.push_back(nums2[m]);
                    
                    
                }
            }
        }
        if(ans.size()>0){
            sort(ans.begin(), ans.end());
            int x=ans[0];
            leetcode.push_back(x);
        }
        int x;

        
       

        for(int i=0;i<ans.size();i++){
            
            if(x!=ans[i]){
                x=ans[i];
                leetcode.push_back(x);
            }
        }
        return leetcode;


    }
};