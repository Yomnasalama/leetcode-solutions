class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        vector<int> res;
        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto ele: mp) {
            pq.push({ele.second,ele.first});
        }
        while(k){
          res.push_back(pq.top().second);
          pq.pop();
            k--;
        }
        return res;
        
    }
};
