class Solution {
public:
    int firstUniqChar(string s) {
        vector<int>alpha={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        for(int i=0;i<s.length();i++){
            alpha[int(s[i]-97)]++;
        }
        vector<char>round1={};
        for(int i=0;i<26;i++){
            if(alpha[i]==1){
                round1.push_back(char(97+i));
            }
        }
        for(int i=0;i<s.length();i++){
            for(int m=0;m<round1.size();m++){
                if(s[i]==round1[m]){
                    return i;
                }
            }
        }
        return -1;
        
    }
};