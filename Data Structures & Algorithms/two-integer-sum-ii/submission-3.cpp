class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>v;
        int start = 0;
        int end = numbers.size()-1;
        while(start<end){
            if(numbers[start] + numbers[end]>target){
                end-=1;
            }
            else if(numbers[start] + numbers[end]<target){
                start+=1;
            }
            else{
                v.push_back(start+1);
                v.push_back(end+1);
                break;
            }
        }
        return v;
    }
};
