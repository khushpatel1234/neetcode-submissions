class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        double low = 1;
        int maxi = INT_MIN;
        for(int t = 0;t<piles.size();t++){
            maxi = max(maxi,piles[t]);
        }
        double high = maxi;
        double ans = INT_MAX;
        while(low<=high){
            double mid = floor((low+high)/2);
            double temp = 0;
            cout<<mid<<endl;
            for(int t = 0;t<piles.size();t++){
                double d = ceil(double(piles[t]/mid));
               
                cout<<d<<endl;
                temp+=(d);
            }
            if(temp<=h){
                // cout<<mid<<" temp - "<<temp<<endl;
                ans = min(mid,ans);
                high  = mid-1;
            }
            else{
                // cout<<mid<<" hi "<<temp<<endl;
                low = mid+1;
            }
        }
        return ans;
    }
};
