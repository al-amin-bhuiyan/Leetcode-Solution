class Solution {
    private:
    static bool compareFirst(const vector<int>& a, const vector<int>& b) {
    return a[0] < b[0];
}
public:
   vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
  
    sort(items.begin(), items.end());
    for(int i=1;i<items.size();i++){
            items[i][1]=max(items[i-1][1],items[i][1]);
        }
   // debug(items)
    vector<int>result;
    for(int i=0;i<queries.size();i++){

        int low=0,high=items.size()-1;
        int ans;
         if(queries[i]<items[0][0]) {result.push_back(0);continue;}
       if(queries[i]>items[items.size()-1][0]) {result.push_back(items[items.size()-1][1]);continue;}
        while(low<=high){
            int mid=(low+high)/2;

            if(items[mid][0]<=queries[i]){
             //   debug(items[mid][0])
              //  debug(queries[i])

               ans=items[mid][1];
               low=mid+1;

            }
            else{
                high=mid-1;
            }
        }
       // cout<<ans<<nl;
        result.push_back(ans);
    }
    return result;
}
};