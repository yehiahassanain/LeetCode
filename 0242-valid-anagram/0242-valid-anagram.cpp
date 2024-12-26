class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!=t.size())
            return false;
        for ( int i = 0 ; i < s.size() ; i++) {
            if (s.find(t[i]) == std::string::npos) {
                return false;
            }
            if (s.find(t[i]) != std::string::npos) {
                // cout<<s.find(t[i])<<endl;
                s[s.find(t[i])] = '0';
            }
        }
        return true;
    }
};