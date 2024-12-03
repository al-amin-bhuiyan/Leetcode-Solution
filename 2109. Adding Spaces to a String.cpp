class Solution {
    private:string ans="";
public:
    string addSpaces(string s, vector<int>& spaces) {
        
     s+=" ";
    string str="";
    for(int i=0,j=0;i<s.size();i++){
      ans+=s[i];

        if(j<spaces.size() and i==spaces[j]){
            char c=ans[ans.size()-1];
            ans.pop_back();
           ans+= ' ';
           // cout<<str<<nl;
    

            j++;
            ans+=c;
        }

      
    }
    ans+=str;
    ans.pop_back();
   // cout<<ans.size()<<nl;
   // cout<<ans<<nl;
   return ans;
  
    }
};