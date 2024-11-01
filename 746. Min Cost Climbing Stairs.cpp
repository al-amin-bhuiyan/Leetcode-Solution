class Solution {
    private:
    int climb(int i,vector<int>&cost,vector<int>dp){
  

    if(i==0)return cost[0];
    if(i==1)return cost[1];
      if(dp[i]!=-1)return dp[i];

    dp[i]=cost[i]+min(climb(i-1,cost,dp),climb(i-2,cost,dp));
    return dp[i];


}


public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n+1);
        dp[0]=cost[0];
        dp[1]=cost[1];

        for(int i=2;i<n;i++){
            dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
        }
        return min(dp[n-1],dp[n-2]);
    }
};