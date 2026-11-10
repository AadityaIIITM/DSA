class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>freq={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        
        for(int i=0;i<s1.length();i++){
            freq[s1[i]-'a']++;
        }
        int window_size=s1.length();
        for(int i=0;i<s2.length();i++){
            int window_index=0;
            vector<int>window_freq={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

            int j=i;
            while(window_index<window_size&&window_index+i<s2.length()){
              
                window_freq[s2[j]-'a']++;
                j++;
                window_index++;
            }
            if(freq==window_freq){
                return true;
            }
        }
        return false;
    }
};