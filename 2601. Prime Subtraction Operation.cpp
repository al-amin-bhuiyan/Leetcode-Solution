class Solution {
    private:
    int prime[1008];
    void seive(){
    for(int i=1;i<=1005;i++){
        prime[i]=i;
    }
 for(int i=2;i*i<=1005;i++){
    if(prime[i]==i){
        for(int j=2*i;j<=1005;j+=i){
            prime[j]=i;
        }
    }
   }
 
}
   
public:
    bool primeSubOperation(vector<int>& nums) {
        int n=nums.size();
        seive();
         vector<int>is_prime;
    int x=-1;
    for(int i=2;i<=1005;i++){
        if(prime[i]==i){
          

            is_prime.push_back(i);

      
    }
    }
  //  debug(is_prime)
   // cout<<nums[0]<<nl;
    bool flg=0;
    int prev = nums[n-1];
        for(int i=n-2; i>=0; i--){
            if(nums[i]<prev){prev = nums[i]; continue;}
            flg = 1;
            for(int sub=0; sub<is_prime.size() and is_prime[sub]<nums[i]; sub++){
                if(nums[i]-is_prime[sub]<prev){
                    prev = nums[i]-is_prime[sub];
                    flg = 0;
                    break;
                }
            }
            if(flg) break;

        }
      return !flg;

        
    }
};