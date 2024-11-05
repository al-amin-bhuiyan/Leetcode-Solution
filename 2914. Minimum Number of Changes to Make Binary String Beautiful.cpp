class Solution {
public:
    int minChanges(string str) {
         int one=0;
 int zero=0;
int cnt=1;
 for(int i=0,j=1;j<str.size();j++){
    if(str[i]==str[j])cnt++;
    else{
        if(cnt&1){cnt=0;zero++;}
        else {cnt=1;}

        i=j;
      
       
    }
 }
return zero;

        
    }
};