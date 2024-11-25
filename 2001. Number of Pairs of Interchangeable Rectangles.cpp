class Solution {
  

 
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
         map<double,int>mp;

         long long int sum=0;

        for(auto it:rectangles){
       mp[static_cast<double>(it[0]) / static_cast<double>(it[1])]++;
    }
     for(auto it:mp){
     sum+=((it.second-1)*1ll*(it.second))/2;
    }
    return sum;

        
    }
};