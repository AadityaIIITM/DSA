class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr1[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        int arr2[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            arr1[int(ch)-97]++;
            
        }
        for(int i=0;i<t.length();i++){
            char ch=t[i];
            arr2[int(ch)-97]++;
        }
        for(int i=0;i<26;i++){
            if(arr1[i]!=arr2[i]){
                return false;
            }
        }
        return true;
        
    }
};