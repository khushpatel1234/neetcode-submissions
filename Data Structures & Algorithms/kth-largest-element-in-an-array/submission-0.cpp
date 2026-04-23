class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>ans;
        
        for(auto p:nums){
            ans.push(p);
        }
        int fans = 0;
        for(int t = 0;t<k;t++){
            fans = ans.top();
            ans.pop();
        }
        return fans;
    }
};
