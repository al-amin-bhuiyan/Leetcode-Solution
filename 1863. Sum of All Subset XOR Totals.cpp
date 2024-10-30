class Solution {
    private:
    int val=0;
void recursion(vector<int>nums,vector<vector<int>>&ans,vector<int>output, int i,int x){
    if(i>=nums.size()){
          ans.push_back(output);
       // debug(ans)
      
        return;
    }
    recursion(nums,ans,output,i+1,x);

    int element=nums[i];
    output.push_back(element);
    x^=output.back();
    val+=x;
   // debug(x);
   // debug(val);
   // debug(output)
    recursion(nums,ans,output,i+1,x);
}
public:
    int subsetXORSum(vector<int>& nums) {
          vector<vector<int>>ans;
    vector<int>output;
    int i=0;int x=0;
    recursion(nums,ans,output,i,x);
    return val;
        
    }
};