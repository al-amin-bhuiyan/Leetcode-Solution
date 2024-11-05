class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       sort(nums.begin(),nums.end());
 // debug(nums)
   int v=1;int n=nums.size();
    nums.erase(unique(nums.begin(), nums.end()), nums.end());


   for(int i=0;i<n;i++){
    if(nums[i]<=0)continue;

    if(v!=nums[i]){return v;}
    
    v++;

   }
   return v;

        
    }
};