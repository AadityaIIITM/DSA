class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int ans=0;
        for(int i=0;i<s.length();i++){
            for(int m=0;m<t.length();m++){
                if(t[m]==s[i]){
                    int x=m-i;
                    if(x<0){
                        x=-x;
                    }
                    ans=ans+x;
                }
            }
        }
        return ans;
        
    }
};