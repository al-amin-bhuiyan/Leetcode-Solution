class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
            priority_queue<int>pq;


    for(int i=0;i<stones.size();i++){
        pq.push(stones[i]);

    }
  

    while(pq.size()>1){
          int q=pq.top();
    pq.pop();
    int p=pq.top();
    pq.pop();
    if(p!=q){
        pq.push(q-p);

        

    }
   
    }
    return (pq.size()==1)?pq.top():0;
        
    }
};