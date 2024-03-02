class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int si = 0, sj =0, ei=matrix.size() - 1, ej=matrix[0].size() - 1, sum = 0;
        vector<int> res; 
        while(sum < matrix[0].size() * matrix.size()){
            for(int r = sj; r <= ej && si <= ei ;r++){
                sum++;
                res.push_back(matrix[si][r]);
            }
            si++;
            for(int d = si; d <= ei && sj <= ej ; d++){
                sum++;
                res.push_back(matrix[d][ej]);
            }
            ej--;
            for(int l = ej; l >= sj && si <= ei ;l--){
                sum++;
                res.push_back(matrix[ei][l]);
            }
            ei--;
            for(int u = ei; u >= si && sj <= ej ;u--){
                sum++;
                res.push_back(matrix[u][sj]);
            }
            sj++;
        }
    return res;
    }
};
