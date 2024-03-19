class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,bool> mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]] = 1;
        }
        int longest = 0;
        for(int i = 0; i < nums.size(); i++) {
            if (mp.count(nums[i] - 1) == 0) {
                int length = 0;
                while (mp.count(nums[i] + length) == 1) {
                    length++;
                }
                longest = max(length, longest);
            }     
        }
        return longest;
    }
};
