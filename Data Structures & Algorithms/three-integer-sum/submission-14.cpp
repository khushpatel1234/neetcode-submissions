class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int t = 0;t<nums.size();t++){
            if(t == 0|| nums[t]!=nums[t-1]){
                vector<vector<int>>temp = twosum(nums,t,nums[t]);
                for(auto s:temp){
                    ans.push_back(s);
                }
            }
            else{
                continue;
            }
        }
        return ans;
    }

    vector<vector<int>>twosum(vector<int>v,int i,int first){
        vector<int>temp;
        vector<vector<int>>ans;
        int p = 0;
        for(int t = i+1;t<v.size();t++){
                 int second = first + v[t];
                 if(t == i+1||v[t]!=v[t-1]){
                 for(int k = t+1;k<v.size();k++){
                    if(k == t+1 || v[k]!=v[k-1]){
                        if(second+v[k]==0){
                            temp.push_back(first);
                            temp.push_back(v[t]);
                            temp.push_back(v[k]);
                            ans.push_back(temp);
                            temp.pop_back();
                            temp.pop_back();
                            temp.pop_back();
                            break;
                        }
                    }}
                    
                 }
        }
        return ans;
       
        
    }
};
