class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++) {
            nums[i]*=nums[i];
        }
        int l = 0, r = nums.size()-1;
        vector<int> res(nums.size());
        int i = nums.size() - 1;
        while(l <= r) {
            if(nums[l] > nums[r]) {
                res[i] = nums[l];
                l++;
            }else {
                res[i] = nums[r];
                r--;
            }
            i--;
        }
        return res;
    }
};
