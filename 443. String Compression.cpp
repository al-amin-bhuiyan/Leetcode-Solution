class Solution {
public:
    int compress(vector<char>& word) {
         // map<char,int>mp;
    int n=word.size();
   // for(int i=0;i<n;i++){
   //  mp[word[i]]++;
   // }
   char c=word[0];
   string comp="";
   int val=1;
   for(int i=1;i<n;i++){
  //  debug(comp)
    if(c!=word[i]){
          comp+=c;
       if(val!=1) comp+=to_string(val);
      
        c=word[i];
        val=1;
    }
    else
    {
        val++;
    }

    
    }
    
    comp+=word[n-1];
    if(val!=1) comp+=to_string(val);
   for(int i=0;i<comp.size();i++)word[i]=comp[i];
  return comp.size();
        
    }
};