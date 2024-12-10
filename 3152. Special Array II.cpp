class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
         vector<int>ans(nums.size(),0);

  for(int i=1;i<nums.size();i++){

    if((nums[i]&1)==(nums[i-1]&1)){
        ans[i]=ans[i-1];
    }
    else{
        ans[i]=ans[i-1]+1;
    }
  }
 // debug(ans);
  vector<bool>result;
  for(auto it:queries){
    if(it[1]-it[0]==ans[it[1]]-ans[it[0]]){
        result.push_back(true);

    }
    else{
        result.push_back(false);
    }
  }
  return result;
        
    }
};