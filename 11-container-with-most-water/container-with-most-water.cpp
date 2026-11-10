class Solution {
public:
    int maxArea(vector<int>& height) {
        int right_pointer=height.size()-1;
        int left_pointer=0;
        int volume=0;
        while(right_pointer>left_pointer){
            volume=max(volume,(right_pointer-left_pointer)*(min(height[right_pointer],height[left_pointer])));
            if(height[right_pointer]>height[left_pointer]){
                left_pointer++;
            }
            else{
                right_pointer--;
            }
        }
        return volume;

    }
};