class Solution {
    string bin(long long int  x)
{
    return bitset<40>(x).to_string();
}
     
public:
    int largestCombination(vector<int>& nums) {
         vector<int>vec(40,0);

    for(int i=0;i<nums.size();i++){
       string str=bin(nums[i]);
       for(int i=0;i<str.size();i++){
        if(str[i]=='1')vec[40-i]++;

       }

    }
  //  debug(vec)
    int x=*max_element(vec.begin(),vec.end());
    return x;
   }
        
    
};