class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int l = 0;
        unordered_map<char,int>mp1,mp2;
        int check = 0;
        int size = s1.size();
        if(s1.size()>s2.size()){
            return false;
        }
        for(int t = 0;t<s1.size();t++){
            mp1[s1[t]]+=1;
        }
       
    
        for(int t = 0;t<s2.size();t++){
            if(t-l==size){
                if(mp1==mp2){
                    return true;
                }
                mp2[s2[l]]-=1;
                if(!mp1[s2[l]]){
                    mp1[s2[l]] = 0;
                }
                mp2[s2[t]]+=1;
                l+=1;
            }
            else if(t-l<size){
                mp2[s2[t]]+=1;
            }
          
        }
        if(mp1 == mp2){
            return true;
        }
        return false;
    }
};
