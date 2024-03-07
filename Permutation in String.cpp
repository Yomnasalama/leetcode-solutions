class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> vec (26,0);
        if(s1.size() > s2.size()) return false;
        for(int i = 0; i < s1.size(); i++){
            vec[s1[i]-'a']++;
        }
        for(int i = 0; i <= s2.size() - s1.size(); i++){
            vector<int> vec2 (26,0);
            for(int j = 0; j < s1.size(); j++){
                vec2[s2[i+j] - 'a']++;
            }
            bool matches = true;
            for (int k = 0; k < 26; k++) {
                if (vec[k] != vec2[k]) {
                    matches =  false;
                    break;
                }
            }
            if(matches){
                return true;
            }
        }
        return false;
        
    }
};
