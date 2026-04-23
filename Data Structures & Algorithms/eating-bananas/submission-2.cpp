class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = INT_MIN;
        int ans = INT_MAX;
        for(int t = 0;t<piles.size();t++){
            right = max(piles[t],right);
        }
        while(left<=right){
            int mid = left + (right-left)/2;
            int temp = time(piles,mid);
            if(temp<=h){
                ans = min(ans,mid);
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        return ans;


    }
    int time(vector<int>piles, int speed){
        int ans = 0;
        for(int t = 0;t<piles.size();t++){
            ans+= ceil(double(double(piles[t])/double(speed)));
        }
        cout<<speed<<" "<<ans<<endl;
        return ans;
    }
};
