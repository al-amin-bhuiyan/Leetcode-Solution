class Solution {
public:
    vector<int> findClosestElements(vector<int>& vec, int k, int x) {
          priority_queue<pair<int, int>, 
      vector<pair<int, int>>, 
      greater<pair<int, int>>> gq;


      for(int i=0;i<vec.size();i++){
        gq.push({abs(x-vec[i]),vec[i]});
      }
      vector<int>ans;
     while (!gq.empty() and k>0) {
        auto top = gq.top();

        ans.push_back(top.second);
        k--;
        
        gq.pop();
    }
    sort(ans.begin(),ans.end());
    return ans;
        
    }
};