class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>>s;
        vector<int>v(temperatures.size(),0);
        for( int t = 0; t<temperatures.size() ; t++ ){
            if(s.size()==0){
                s.push({temperatures[t],t});
            }
            else if(s.top().first>=temperatures[t]){
                s.push({temperatures[t],t});
            }
            else{
                while(s.size()>0 && s.top().first<temperatures[t]){

                    v[s.top().second] = t - s.top().second;
                    s.pop();
                    
                }
                s.push({temperatures[t],t});
            }
        }
        return v;

    }
};
