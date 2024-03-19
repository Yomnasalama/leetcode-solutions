class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> vec;
        for(int i = 0; i < intervals.size(); i++){
            if (vec.empty() || vec.back()[1] < intervals[i][0]) {
                vec.push_back(intervals[i]);
            } else {
                vec.back()[1] = max (vec.back()[1], intervals[i][1]);
            }
        }
        return vec;
    }
};
