class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& v) {
        vector<pair<vector<int>, int>> vp;
        int n=v.size();

    for (int i = 0; i < n; i++) {
        vp.push_back({v[i], i});
    }

    sort(vp.begin(), vp.end());
    vector<int>ans1(vp.size(),-1);

    for (int i = 0; i < vp.size(); ++i) {
        int x=vp[i].first[1];
        int ans=-1;
        int low=0,high=vp.size()-1;
        while(low<=high){
            int mid=(low+high)>>1;
            if(vp[mid].first[0]>=x){
                ans1[vp[i].second]=vp[mid].second;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
   }
 return ans1;
        
    }
};