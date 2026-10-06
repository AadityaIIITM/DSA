class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max_word=0;
        int sum;
        for(int i=0;i<sentences.size();i++){
            sum=0;
            for(int m=0;m<sentences[i].length();m++){
                if(sentences[i][m]==' '){
                    sum++;
                }
            }
            max_word=max(max_word,sum);
        }
        return max_word+1;
    }
};