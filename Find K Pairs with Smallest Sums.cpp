class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<pair<int,pair<int,int>>> pq;
        vector<vector<int>>res;
        for(int i = 0; i < nums1.size(); i++){
            for(int j = 0; j < nums2.size(); j++){
                if(pq.size() < k) {
                    pq.push({nums1[i]+nums2[j], {nums1[i],nums2[j]}});
                    cout<<nums1[i]<<" "<<nums2[j]<<endl;
                } 
                else if(nums1[i]+nums2[j] < pq.top().first) {
                    pq.pop();
                    pq.push({nums1[i]+nums2[j], {nums1[i],nums2[j]}});
                } else {
                    break;
                }
            }
        }
        
       while(!pq.empty()){
            res.push_back({pq.top().second.first,pq.top().second.second});
            pq.pop();
        }
    return res;
    }

};
