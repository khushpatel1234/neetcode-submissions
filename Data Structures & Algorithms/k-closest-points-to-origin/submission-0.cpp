class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, vector<int>>, vector<pair<int, vector<int>>>, greater<pair<int, vector<int>>>> fans;

        vector<vector<int>>ansi;
        for(int t = 0;t<points.size();t++){
            int ans = points[t][0]*points[t][0] + points[t][1]*points[t][1];
            fans.push({ans,{points[t][0],points[t][1]}});
        }
        for(int t =0;t<k;t++){
            ansi.push_back(fans.top().second);
            fans.pop();
        }
        return ansi;

    }
};
