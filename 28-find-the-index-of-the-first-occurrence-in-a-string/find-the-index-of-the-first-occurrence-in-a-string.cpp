class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0;i<haystack.length();i++){
            if(needle.length()+i>haystack.length()){
                return -1;
            }
           
           if(haystack.substr(i, needle.length())==needle){
           
            return i;
           } 
          
        }
        return -1;
    }
};