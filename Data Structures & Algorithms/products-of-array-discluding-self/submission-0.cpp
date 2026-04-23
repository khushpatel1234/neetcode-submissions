class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>pre,post,ans;
        int d1 = 1;
        int d2 = 1;
        for(int t =0;t<nums.size();t++){
            d1*=nums[t];
            d2*=nums[nums.size()-t-1];
            pre.push_back(d1);
            post.push_back(d2);
        }
        for(int t = 0;t<nums.size();t++){
            if(t==0){
                ans.push_back(post[nums.size()-2]);
            }
            else if(t==nums.size()-1){
                ans.push_back(pre[nums.size()-2]);
            }
            else{
            ans.push_back(pre[t-1]*post[nums.size()-2-t]);
        }}
        return ans;
    }
};
