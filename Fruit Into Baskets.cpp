class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int left = 0;
        int res = 0, count = 0;
        map<int,int> mp;
        for(int i = 0; i < fruits.size(); i++){
            mp[fruits[i]]++;
            count++;
            while(mp.size() > 2){
                mp[fruits[left]]--;
                count--;
                if(mp[fruits[left]] == 0){
                    mp.erase(fruits[left]);
                }
                left++;
            }
            res = max(res, count);
        }
        return res;
    }
};
