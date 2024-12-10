class Solution {
public:
    int maximumLength(string str) {
     map<string,int>mp;
  int n = str.size();
  set<char>st;
   int maxi=-1;

    for (int i = 0; i < n; ++i) {
        string substring = "";
        for (int j = i; j < n; ++j) {
            substring += str[j];
          mp[substring]++;
         // cout<<substring<<nl;

          for(int k=0;k<substring.size();k++){
            st.insert(substring[k]);
          }
          if(st.size()==1 and mp[substring]>=3){
              maxi=max(maxi,(int)substring.size());

          }
        //  cout<<mp[substring]<<sp<<substring<<nl;
          st.clear();
        }
    }
   
   
  //  cout<<maxi<<nl;
    return maxi;

        
    }
};