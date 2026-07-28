class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int t=0;t<=n;t++){
            ans.push_back(count(t));
        }
        return ans;
    }

    int count(int t){
        int ans = 0;
        while(t){
            if(t%2!=0){
                ans+=1;
            }
            t/=2;
        }
        return ans;
    }
};
