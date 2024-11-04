class Solution {
public:
    string compressedString(string word) {
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
    if(c!=word[i] or val>=9){
        comp+=to_string(val);
        comp+=c;
        c=word[i];
        val=1;
    }
    else
    {
        val++;
    }

    
    }
    comp+=to_string(val);
    comp+=word[n-1];
    return comp;
        
    }
};