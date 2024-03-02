class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxi = 0;
        for(int i = 0; i < nums.size(); i++) {
            maxi = max (maxi, i+nums[i]);
            if (maxi >= nums.size() - 1) return true;
            if (nums[i] == 0 && maxi == i) return false;
        }
        return false;
    }
};
