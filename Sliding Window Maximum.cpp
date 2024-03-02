class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        map<int,int> mp;
        priority_queue<int> pq;
        vector<int> res;
        for(int i = 0; i < k; i++){
           pq.push(nums[i]);
            mp[nums[i]]++;
        }
        res.push_back(pq.top());
        for(int i = k; i < nums.size(); i++){
            pq.push(nums[i]);
            mp[nums[i]]++;
            mp[nums[i-k]]--;
            while(mp[pq.top()] ==  0) {
                pq.pop();
            }
            res.push_back(pq.top());
        }
        return res;
    }
};
