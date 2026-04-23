class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        map<float,float>time,mp;
        float d = 0;
        for(int t =0;t<position.size();t++){
            float d = float((target - position[t]))/float(speed[t]);
            time[target - position[t]] = d;
        }
        int ans = 0;
 float mini = INT_MIN;
    for(auto itr :time){
        if(itr.second>mini){
            ans+=1;
            cout<<itr.second<<" "<<mini<<endl;
            mini = itr.second;
    }
}
    return ans;
    }
};
