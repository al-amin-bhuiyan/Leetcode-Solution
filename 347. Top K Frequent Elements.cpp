class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;

        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int> ans;
        priority_queue<pair<int,int>>pq;
        for(auto it:mp){
            pq.push({it.second,it.first});
        }
        int n=pq.size()-k;
        while(pq.size()>n){
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
        
    }
};