class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size()-1;
        while(left<right){
            while(left<s.size()&&!isalnum(s[left])){
                left+=1;
            }
            while(right>=0&&!isalnum(s[right])){
                right-=1;
            }
            if(left>right){
                return true;
            }
            else if(tolower(s[left])!=tolower(s[right])){
                cout<<s[left]<<s[right]<<endl;
               return false;
            }
            left+=1;
            right-=1;
        }
            return true;
    }

};
