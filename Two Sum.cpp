class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        vector<int> res;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]=i;
        }
            
        for(int i = 0; i < nums.size(); i++){
            if (mp.count(target - nums[i])!= 0) {
                if(i != mp[target - nums[i]]){
                    res.push_back(i);
                    res.push_back(mp[target - nums[i]]);
                    return res;
                }
            }
        }
        return res;
        
    }
};
