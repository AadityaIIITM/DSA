class Solution {
public:
        bool is_same(vector<int>vec1,vector<int>vec2){
            for(int i=0;i<26;i++){
                if(vec1[i]!=vec2[i]){
                    return false;
                }
            }
            return true;
        }

    bool checkInclusion(string s1, string s2) {
        vector<int>freq={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        for(int i=0;i<s1.length();i++){
            freq[s1[i]-'a']++;
        }
       
        int window_size=s1.length();
        for(int i=0;i<s2.length();i++){
           int windidx=0;
           int idx=i;
           vector<int>windfreq={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
           while(windidx<window_size&&idx<s2.length()){
            windfreq[s2[idx]-'a']++;
            windidx++;
            idx++;
           }
        if(is_same(freq,windfreq)){
            return true;
        }

           
        }
        return false;
    }

       
        

        
    
};