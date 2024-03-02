class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int maxi = 0;
        unordered_set<char> res;
        map<char,bool> mp;
        for(int i = 0; i < s.size(); i++) {
            if(res.count(s[i]) == 0) {
                res.insert(s[i]);
                maxi = max(maxi, i - left + 1);
            } else {
                while(res.count(s[i])) {
                    res.erase(s[left]);
                    left++;
                }
                res.insert(s[i]);
            }
        }
        return maxi;
        
    }
};
