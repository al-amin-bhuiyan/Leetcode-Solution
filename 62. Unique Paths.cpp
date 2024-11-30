class Solution {

    private:
    int path(int x,int y,int m,int n,int (&dp)[105][105]){
    if(x==m-1 and y==n-1)return 1;

    int ans1=0,ans2=0;

    if(dp[x][y]!=-1)return dp[x][y];

    if(x<m-1)
    ans1=  path(x+1,y,m,n,dp);

    if(y<n-1)
     ans2=  path(x,y+1,m,n,dp);
 //  cout<<dp[x][y+1]+dp[x+1][y]<<nl;

  return  dp[x][y]=ans1+ans2;


}
public:
    int uniquePaths(int m, int n) {
        int dp[105][105];
   memset(dp, -1, sizeof(dp)); 
  int result=  path(0,0,m,n,dp);
  return result;
        
    }
};