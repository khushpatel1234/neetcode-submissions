class Solution {
public:
    bool isValid(string s) {
        stack<char>sm;
        map<char,char>mp1,mp2;
      
        mp2[')'] ='(';
      
        mp2['}'] = '{';
    
        mp2[']'] = '[';
        for(int t = 0;t<s.size();t++){
            if(!mp2[s[t]]){
                sm.push(s[t]);
            }
            else if(mp2[s[t]]){
                if(sm.empty()){
                    return false;
                }
                else if(mp2[s[t]]==sm.top()){
                sm.pop();}
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
        if(sm.empty()){
            return true;
        }
        return false;
    }
};
