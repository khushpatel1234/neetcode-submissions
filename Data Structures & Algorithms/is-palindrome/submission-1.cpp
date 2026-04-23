class Solution {
public:
    bool isPalindrome(string s){
        string p = "";
        
        for(int t = 0;t<s.size();t++){
            if(s[t]!=' '&& iswalnum(s[t])){
                p+=tolower(s[t]);
            }
        }
        string l = "";
        for(int t =0;t<p.size();t++){
            l+=p[p.size()-1-t];
        }
        if(p==l){
            return true;
        }
        else{
            return false;
        }
    }
};
