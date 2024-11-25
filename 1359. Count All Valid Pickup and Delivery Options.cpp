class Solution {
    private
      static const  int N=1005;
       static const  long long int  M=1e9+7;
    int fact[N];
   long long int mod(long long int x){
    return ((x%M+M)%M);
}

    void factorial(){
    fact[0]=1;
 
    for(int i=1;iN;i++){
        debug(fact[i-1])
        fact[i]=(fact[i-1]1lli)%M;
        inver_fact[i]=power_Bigmod(fact[i],M-2,M);
 
    }
}
long long int power_Bigmod(long long int x, long long int y,long long int p)
{
   long long int res = 1;
    while (y  0) {
        if (y % 2 == 1)
            res = mod(mod(res) 1ll mod(x));
         y = y2
        y = y  1;
        x = mod(mod(x) 1ll mod(x));
    }
    return res % p;
}
 
 

    

public
    int countOrders(int n) {
        factorial();  Precompute factorials
        
         Compute (2^n)! % M
        long long nn_fact = fact[2  n];
        
         Compute modular inverse of n! under M
        long long n_fact = fact[n];
        long long n_fact_inv = power_Bigmod(n_fact, M - 2, M);
        
         Compute modular inverse of 2^n under M
        long long pow_2n = power_Bigmod(2, n, M);
        long long pow_2n_inv = power_Bigmod(pow_2n, M - 2, M);
        
         Combine results nn_fact  (n_fact  pow_2n)
     
       long long  result = (nn_fact  pow_2n_inv) % M;
        return result;
        
    }
};