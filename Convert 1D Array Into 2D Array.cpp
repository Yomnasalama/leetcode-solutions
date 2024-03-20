class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> res ( m , vector<int> (n));
        if(m*n != original.size()) {
            return {};
        }
        int j = 0;
        vector<int> vec;
        for (int i = 0; i < original.size(); i++) {
            vec.push_back(original[i]);
            if((i+1) % n == 0) {
                res[j] = (vec);
                vec.clear();
                j++;
            }
        }
        return res;
    }
};
