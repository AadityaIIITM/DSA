class Solution {
public:
    bool checkString(string s) {
        int count=0;
        //Edge Case
        if(s.length()==2){
            if(s[0]=='a'&&s[1]=='b'){
                return true;
            }
            return false;
        }
        for(int i=0;i<s.length()-1;i++){
            if(s[i]!=s[i+1]){
                count++;
            }
            if(count>1||(s[i]=='b'&&s[i+1]=='a')){
                return false;
            }
        }
        return true;
    }
};