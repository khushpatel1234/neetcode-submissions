class Solution {
public:
    int minDistance(string word1, string word2) {
        vector<vector<int>>memo(word1.size()+1,vector<int>(word2.size()+1,-1));
        int result = solve(word1,word2,0,0,memo);
        

            return result;
     

    }
    int solve(string &w1, string &w2,int i, int j,vector<vector<int>>&memo){
        if(j == w2.size()&&i==w1.size()){
            return 0;
        }
        else if(j==w2.size()){
            return w1.size()-i;
        }
        else if(i==w1.size()){
            return w2.size()-j;
        }
        
        else if(memo[i][j]!=-1){
            return memo[i][j];
        }
        if(w1[i]==w2[j]){
            return memo[i][j] = min(min(solve(w1,w2,i+1,j+1,memo),solve(w1,w2,i+1,j,memo)+1),solve(w1,w2,i,j+1,memo)+1);
        }
        else{
            return memo[i][j] = min(min(solve(w1,w2,i+1,j+1,memo)+1,solve(w1,w2,i+1,j,memo)+1),solve(w1,w2,i,j+1,memo)+1);
        }
       
    }

};
