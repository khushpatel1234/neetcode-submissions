class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>q;
        queue<int>q1;
        vector<int>ans;
        
        for(int t = 0;t<k;t++){
            q.push({nums[t],t});
        }
        ans.push_back(q.top().first);
        int left = 1;
        for(int t = k;t<nums.size();t++){
            q.push({nums[t],t});
       
            while(q.top().second<left){
                q.pop();
            }
            left+=1;
            ans.push_back(q.top().first);
        }
        return ans;

    }
};
