class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size()-1;
        vector<int>ans;
        while(l<r){
            int req = target - numbers[r];
            if(numbers[l]<req){
                l++;
            }
            else if(numbers[l]>req){
                r--;
            }
            else{
                ans.push_back(++l);
                ans.push_back(++r);
                return ans;
            }
        }
        
    }
};
