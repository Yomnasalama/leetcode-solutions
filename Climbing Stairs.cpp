class Solution {
public:
    int help(int n, vector<int>&dp){
        if (n < 0)
            return 0;
         if(n==1 || n==0)
            return 1;
        if(dp[n] != -1){
            return dp[n];
        }
        int one = help(n-1, dp);
        int two = help(n-2, dp);
        return dp[n] = one + two;
        
    }
    int climbStairs(int n) {
        vector<int> dp (n+1,-1);
        return help(n,dp);
        
        
    }
};
