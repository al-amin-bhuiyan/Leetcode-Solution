class Solution {
public:
    int findKthLargest(vector<int>& stones, int k) {
           priority_queue<int>pq(stones.begin(),stones.end());
    //debug(pq)
  
    int t=pq.size();
  

    while(!pq.empty()){
          if(t-pq.size()==k-1){
           return pq.top();
          }
          pq.pop();
        

    }
    return pq.top();
   
        
    }
};