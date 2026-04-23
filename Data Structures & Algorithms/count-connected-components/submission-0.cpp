class Solution {
public:
    int countComponents(int n, vector<vector<int>>& edges) {
        int ans = 0;
        map<int,set<int>>mp;
        for(int t =0;t<edges.size();t++){
            mp[edges[t][0]].insert(edges[t][1]);
            mp[edges[t][1]].insert(edges[t][0]);
        }
        set<int>s;;
        for(int t = 0;t<n;t++){
            if(s.count(t)){
                continue;
            }
            else{
                ans+=1;
                dfs(mp,s,t);
            }
        }
        return ans;
     
       
    }

    void dfs(map<int,set<int>>mp,set<int>&s,int check){
        if(s.count(check)){
            return;
        }
        s.insert(check);
        for(auto m:mp[check]){
            dfs(mp,s,m);
        }
        

    }
};
