class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans = 0;
        int left = 0;
        int right = heights.size()-1;
        int curr = 0;
        while(left<right){
            curr = min(heights[left],heights[right])*(right-left);
            ans = max(ans,curr);
            if(heights[left]<heights[right]){
                left+=1;
            }
            else{
                right-=1;
            }
        }
        return ans;
    }
};
