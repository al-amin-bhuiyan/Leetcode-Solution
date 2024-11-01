class Solution {
    private:
    bool prime_factor(int  n){
        if(n<=0)return false;
         for(int  j=2;(long)j*j<=n;j++){
        if(n%j==0){
           
            while(n%j==0){
            
                n/=j;
            }
     
           if(j>5)return false;
        }
    }
     if(n>1){

            if(n>5)return false;
        }
        return true;
      }
public:
    bool isUgly(int n) {
        return (prime_factor(n) == 1) ? true : false;
        
    }
};