class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>v,ans;

        int l = 0;
        int temp = l;
        sort(nums.begin(),nums.end());
        
        for(int t = 0;t<nums.size();t++){
            int req = 0 - nums[t];
            l = temp;
            l += 1;
            temp = l;
            int r = nums.size()-1;
            while(l<r){
                int tar = req - nums[r];
                if(nums[l]<tar){
                    l++;
                }
                else if(nums[l]>tar){
                    r--;
                }
                else{
                    vector<int>temp;
                    temp.push_back(nums[t]);
                    temp.push_back(nums[l]);
                    temp.push_back(nums[r]);
                    v.push_back(temp);
                    l++;
                    r--;
                }
            }
        }
       map<vector<int>, int> mp;
        
        for(int r = 0;r<v.size();r++){

            if(!mp[v[r]]){
                ans.push_back(v[r]);
                mp[v[r]]++;
            }
            else{mp[v[r]]++;}
        }
        return ans;

    }
};
