class Solution {
public:
    int trap(vector<int>& height) {
        int ans = 0;
        int left_max = INT_MIN;
        int right_max = INT_MIN;
        int left= 0 ;
        int right = height.size()-1;
        while(left<right){
            if(height[left]<=height[right]){
                left_max = max(left_max,height[left]);
                ans+=(left_max-height[left]);
                left+=1;
            }
            else{
                right_max = max(right_max,height[right]);
                ans+=(right_max-height[right]);
                right-=1;
            }
        }
        return ans;
    }
};
