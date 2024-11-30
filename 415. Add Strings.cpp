class Solution {
public:
    string addStrings(string num1, string num2) {
          int x=max(num1.size(),num2.size());

    for(int i=0;i<x;i++){
        if(x>num1.size()){
           num1="0"+num1;
        }
        if(x>num2.size()){
          num2="0"+num2;
        }
    }
   // debug(num1)
   // debug(num2)
    string str="";
    int n=0;
   for(int i=x-1;i>=0;i--){
    int xx=num1[i]-'0'+num2[i]-'0'+n;
 //   cout<<xx<<nl;
    

    if(xx>=10){
        str+=to_string(xx%10);
        n=xx/10;


    }
    else {
        str+=to_string(xx);
        n=0;
    }
   // cout<<str<<nl;
   }
     if(n!=0)str=str+to_string(n);
   reverse(str.begin(),str.end());
  return str;


 

        
    }
};