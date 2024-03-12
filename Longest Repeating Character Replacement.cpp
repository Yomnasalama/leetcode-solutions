class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0;
        int res = 0, maxF = 0;
        map<char,int> freq;
        for(int right = 0; right < s.length(); right++){
            freq[s[right]]++;
            maxF = max(maxF, freq[s[right]]);
            while(right - left + 1 - maxF > k) {
                freq[s[left]]--;
                left++;
            }
            res = max(res, right-left+1);
        }
        return res;
    }
};
