class Solution {
public:
    int countSubstrings(string s) {
        int count = 0;
        for(int t = 0;t<s.size();t++){
            int l = t;
            int r  = t;
            while(s[l]==s[r]&&l<s.size()&&r>=0){
                count+=1;
                l++;
                r--;
            }

             l = t+1;
             r = t;
            while(s[l]==s[r]&&l<s.size()&&r>=0){
                count+=1;
                l++;
                r--;
        }

    }
    return count;
}
};
