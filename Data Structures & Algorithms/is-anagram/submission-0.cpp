class Solution {
public:
    bool isAnagram(string s, string t) {
        map<int,int>mp1,mp2;
        if(s.size()!=t.size()){
            return false;
        }
        for(int y =0;y<s.size();y++){
            mp1[s[y]]++;
            mp2[t[y]]++;
        }
        if(mp1==mp2){
            return true;
        }
        else{
            return false;
        }
    }
};
