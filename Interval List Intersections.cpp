class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<vector<int>> res;
       for(int i = 0, j = 0; i < firstList.size() && j < secondList.size();) {
           int low = max(firstList[i][0], secondList[j][0]);
           int high = min(firstList[i][1], secondList[j][1]);
           if(high >= low) res.push_back({low, high});
           if(firstList[i][1] == high) i++;
           else j++;
       }
        return res;
    }
};
