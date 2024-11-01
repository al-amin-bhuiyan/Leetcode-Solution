class Solution {
    private:
    int climb(int n,vector<int>&dp){
    if(dp[n]!=-1)return dp[n];

    if(n<=1)return 1;
  //  debug(n);

   return  dp[n]=climb(n-1,dp)+climb(n-2,dp);
  
}


public:
    int climbStairs(int n) {
          vector<int>dp(n+1,-1);
          int total=climb(n,dp);
          return total;
        
    }
};