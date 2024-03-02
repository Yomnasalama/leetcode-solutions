class Solution {
public:
    void sortColors(vector<int>& arr) {
        for(int i = 0; i < arr.size();i++){
            int idx = i;
            for(int j = i+1; j < arr.size();j++){
                if(arr[idx] > arr[j]){
                    idx = j;
                }
            }
            swap(arr[idx],arr[i]);
        }
        
    }
};
