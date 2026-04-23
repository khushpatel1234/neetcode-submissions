class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        queue<char>q;
        int temp = INT_MIN;
        int check = 0;
        if(s.size()==0){
            return 0;
        }
        for(int t = 0;t<s.size();t++){
            if(mp[s[t]]==0){
                check+=1;
                mp[s[t]]+=1;
                q.push(s[t]);
                temp = max(temp,check);
                cout<<s[t]<<" - "<<temp<<endl;
            }
            else{
                int d = 0;
                while(q.size()){
                    
                    if(q.front()==s[t]){
                        cout<<"1 - "<<q.front()<<endl;
                        
                        q.pop();
                        break;
                    }
                    else{
                        cout<<"2 - "<<q.front()<<endl;
                        mp[q.front()]-=1;
                        q.pop();
                        check-=1;
                    }
                    
                }
                temp = max(temp,check);
                
                q.push(s[t]);
                cout<<"else - "<<temp<<endl;
            }
        }
        return temp;
    }
};
