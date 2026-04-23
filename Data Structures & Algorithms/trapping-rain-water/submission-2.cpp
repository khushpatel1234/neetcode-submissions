// class Solution {
// public:
//     int trap(vector<int>& height) {
//         int left = 1;
//         int right = height.size()-1;
//         int leftmax = 0;
//         int leftr = 0;
//         int rightr = 0;
//         int leftw = 0;
//         int rightw = 0;
//         int rightmax = height.size()-1;
//         while(left<right){
//             if(height[left]>=height[right]){
//                 if(height[left]>=height[leftmax]){
//                     leftw+=(left-leftmax)*(height[leftmax]) - leftr;
//                     leftmax = left;
//                     leftr = 0;
//                 }
//                 else{
//                     leftr+=height[left];
//                 }
//                 left+=1;
//             }
//             else{
//                 if(height[right]>=height[rightmax]){
//                     rightw+=(rightmax - right)*(height[rightmax]) - rightr;
//                     rightmax = right;
//                     rightr = 0;
//                 }
//                 else{
//                     rightr+=height[right];
//                 }
//                 right-=1;
//             }
           
//         }
//          return leftw+rightw;
//     }
// };
class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0;
        int r = height.size() - 1;
        int leftmax = height[l];
        int rightmax = height[r];
        int result = 0;
        while(l<r)
        {
            if(leftmax < rightmax)
            {
                l++;
                leftmax = max(leftmax , height[l]);
                result += leftmax - height[l];
            }
            else
            {
                r--;
                rightmax = max(rightmax, height[r]);
                result += rightmax - height[r];
            }
        }

        return result;
    }
};