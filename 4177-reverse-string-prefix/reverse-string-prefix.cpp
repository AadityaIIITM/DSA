class Solution {
public:
    string reversePrefix(string s, int k) {
        if(k==1){
            return s;
        }
        if(k==s.length()){
            int st=0;
            int end=s.length()-1;
            while(st<=end){
                swap(s[st],s[end]);
                st++;
                end--;
            }
            return s;
        }
        for(int i=0;i<k;i++){
           int st=0;
           int end=k-1;
           while(st<=end){
            swap(s[st],s[end]);
            st++;
            end--;
           }
           return s;
            

        }
        return s;

    }
};