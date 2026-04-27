class Solution {
public:
    bool isMatch(string s, string p) {
        return solve(s, p, 0, 0);
    }

    bool solve(string& s, string& p, int i, int j) {
        if (j == p.size()) {
            return i == s.size();
        }

        bool firstMatch = false;

        if (i < s.size() && (s[i] == p[j] || p[j] == '.')) {
            firstMatch = true;
        }

        if (j + 1 < p.size() && p[j + 1] == '*') {
            return solve(s, p, i, j + 2) ||
                   (firstMatch && solve(s, p, i + 1, j));
        }

        return firstMatch && solve(s, p, i + 1, j + 1);
    }
};