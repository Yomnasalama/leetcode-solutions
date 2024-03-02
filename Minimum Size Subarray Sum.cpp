class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0;
        int mini = 1e9;
        int left = 0;
        for(int i = 0; i < nums.size(); i++){
            sum+=nums[i];
            while(sum >= target) {
                mini = min (mini, i-left+1);
                sum-=nums[left];
                left++;
            }
        }
        if(mini == 1e9) return 0;
        return mini;
    }
};
