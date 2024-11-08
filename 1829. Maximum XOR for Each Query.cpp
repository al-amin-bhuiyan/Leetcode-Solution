class Solution {

public:
    vector<int> getMaximumXor(vector<int>& nums, int maxbit) {
        int n=nums.size();
          int get=(1<<maxbit)-1;


    int xor_value=0;

    for(int i=0;i<n;i++){

        xor_value=xor_value^nums[i];

    }
 //   cout<<xor_value<<nl;
 //   cout<<xor_value<<nl;
    vector<int>ans;
    ans.push_back((xor_value^get));
 //   cout<<(xor_value^get)<<sp;
    for(int i=n-1;i>0;i--){
        xor_value=xor_value^nums[i];
        ans.push_back((get^xor_value));

      
    }
  //  debug(ans)
  return ans;
        
    }
};