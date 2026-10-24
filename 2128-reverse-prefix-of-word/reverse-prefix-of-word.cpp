class Solution {
public:
    string reversePrefix(string word, char ch) {
        int x=0;
        for(int i=0;i<word.length();i++){
            if(ch==word[i]){
                x=i;
                break;
            }
        }
        int st=0;
        int end=x;
        while(st<end){
            swap(word[st],word[end]);
            st++;
            end--;
        }
        return word;
    }
};