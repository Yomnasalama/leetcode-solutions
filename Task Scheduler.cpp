class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        priority_queue<pair<int,char>>pq;
        unordered_map<int,int> freq;
        for(int i =0; i < tasks.size(); i++){
            freq[tasks[i]]++;
        }
        for(auto ele : freq) {
            pq.push({ele.second, ele.first});
        }
        int ans = 0;
        while(!pq.empty()){
           if(pq.top().first==1)
           {
                ans+=pq.size();
                break;
           }
           vector<pair<int,char>> v;
           v.push_back(pq.top());
           pq.pop();
           ans+=1;
            for(int i = 0; i < n; i++) {
                if(!pq.empty()) {
                    v.push_back(pq.top());
                    pq.pop();
                }
                ans++;
            }
            for(auto ele: v) {
                if(ele.first > 1) {
                    pq.push({ele.first-1, ele.second});
                }
            }
        }
        return ans;
        
    }
};
