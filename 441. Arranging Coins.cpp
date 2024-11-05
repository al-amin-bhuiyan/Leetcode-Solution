class Solution {
public:
    int arrangeCoins(int n) {
         long low=0,high=1e9,ans;
    while (low < high) {
            long mid = (low + high+1)>>1;
            if ((long)mid*(mid+1)<= (long)n*2) {
                low = mid;
                ans=mid;
            } else {
                high = mid -1;
            }
        }
   return ans;
        
    }
};