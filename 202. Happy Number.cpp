class Solution {
public:
    bool isHappy(int n) {
         int result=0;

    while(n){
        result+=(n%10)*(n%10);
     //   cout<<result<<nl;
        n/=10;
    }

    int cnt=0;
    while(result>1){
        int nn=0;
        while(result){
        nn+=(result%10)*(result%10);
        result/=10;
        cnt++;
    }
  //  cout<<nn<<nl;
    result=nn;

    if(cnt>=30){return false;}
    }
    return true;

        
    }
};