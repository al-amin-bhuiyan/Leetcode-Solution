class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
          map<int ,int>mp;
    int n=nums.size();

    for(int i=0;i<n;i++){
      
        mp[nums[i]]++;


    }
     
    int ans=0;
    for(auto it:mp){
        if(it.first <k and it.second>=1){
        //    yes;
            return -1;
        }
        else if(it.first>k and it.second>=1){
            ans++;
        }
    }
  
    return ans;
   
        
    }
};