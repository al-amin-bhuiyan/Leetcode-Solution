class Solution {
public:
    bool canChange(string start, string target) {
          int i=0;
     int j=0;
     int s=start.size();
     int t=target.size();

      for(int i=0, j=0; i<s || j<t; i++, j++){
        while(i<s and start[i]=='_')i++;
        while(j<t and target[j]=='_')j++;

        int c=start[i];
        int cc=target[j];

        if(c!=cc )return false;

        if(i<j and c=='L')return false;

        if(i>j and c=='R')return false;
       // i++;
       // j++;



     }
    // if(i!=s or j!=t)return false;
     return true;
        
    }
};