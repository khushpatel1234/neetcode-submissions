// class Solution {
// public:
//     int trap(vector<int>& height) {
//         int left = 0;
//         int right = height.size()-1;

//         int lm = 0;
//         int lh = 0;
//         int rh = 0;
//         int rm = right;
//         int ans = 0;
//         while(left<right){
//             if(height[left]<=height[right]){
//                 if(height[lm]<=height[left]){
//                     if(left - lm -1 >0)
//                     ans+= height[lm]*(left-lm - 1) - lh;
//                     lm = left;
//                     lh = 0;
//                 }
//                 else{
//                     lh += height[left];
//                 }
//                 left+=1;
//             }
//             else{
//                 if(height[rm]<=height[right]){
//                     if((rm - right - 1) > 0){
//                         ans+= height[rm]*(rm - right - 1) - rh;
//                     }
//                     rm = right;
//                     rh = 0;
//                 }
//                 else{
//                     rh += height[right];
//                 }
//                 right-=1;
//             }

//         }
//         return ans;
//     }
// };
class Solution {
public:
    int trap(vector<int>& height) {
        if (height.empty()) return 0;
        
        int left = 0, right = height.size() - 1;
        int leftMax = 0, rightMax = 0;
        int ans = 0;
        
        while (left < right) {
            if (height[left] < height[right]) {
                if (height[left] >= leftMax) {
                    leftMax = height[left];
                } else {
                    ans += leftMax - height[left];
                }
                left++;
            } else {
                if (height[right] >= rightMax) {
                    rightMax = height[right];
                } else {
                    ans += rightMax - height[right];
                }
                right--;
            }
        }
        
        return ans;
    }
};