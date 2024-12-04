class Solution {
public:
    bool checkPerfectNumber(int n) {
        if(n==1)return false;
        int sum=0;
        for(int i=2;i*i<=n;i++){
         
                if(n%i==0){
                    sum+=(n/i);
                    if(n/i!=i)sum+=i;
                
            
            }

        }
        return sum+1==n?true:false;
        
    }
};