class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      vector<vector<int>>v;
      vector<int>temp;
      map<vector<int>,int>mp;
      sort(nums.begin(),nums.end());
      
      for(int t =0;t<nums.size()-1;t++){
        int start = t+1;
        int end = nums.size() - 1;
       
        while(start<end){
            int target = nums[start] + nums[end] + nums[t];
            if(target<0){
                start+=1;
            }
            else if (target>0){
                end-=1;
            }
            else{
                vector<int> temp;
                temp.push_back(nums[t]);
                temp.push_back(nums[start]);
                temp.push_back(nums[end]);
                 if(mp[temp]){
                     start+=1;
                     continue;
                     }
                 else{
                     mp[temp]++;
                     }
                v.push_back(temp);
                start+=1;
            }
        }
      }
      return v;
    }
};
