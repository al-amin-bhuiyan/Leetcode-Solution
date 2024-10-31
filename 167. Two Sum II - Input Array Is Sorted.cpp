class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        bool ok=false;
        vector<int>ans;
        for(int i=0;i< n;i++){
            int x=numbers[i];
            int low=i+1,high=numbers.size()-1;
            while(low<=high){
                int mid=(low+high)>>1;
                if(target-x==numbers[mid] and i!=mid){
                    ans.emplace_back(i+1);
                    ans.emplace_back(mid+1);
                    ok=true;
                    break;
                }
                else if(target-x>numbers[mid])low=mid+1;
                else high=mid-1;
            }
            if(ok)break;
        }
        return ans;

        
    }
};