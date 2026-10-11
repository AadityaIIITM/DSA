class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans={};
        if(word1.length()==word2.length()){
            for(int i=0;i<word1.length();i++){
                ans=ans+word1[i]+word2[i];
            }
        }
        if(word1.length()<word2.length()){
            int q;
            for(int i=0;i<word1.length();i++){
                ans=ans+word1[i]+word2[i];
                q=i;
            }
            for(int i=q+1;i<word2.length();i++){
                ans=ans+word2[i];
            }

        }
        if(word2.length()<word1.length()){
            int q;
            for(int i=0;i<word2.length();i++){
                ans=ans+word1[i]+word2[i];
                q=i;
            }
            for(int i=q+1;i<word1.length();i++){
                ans=ans+word1[i];
            }

        }
        return ans;
        
        
    }
};