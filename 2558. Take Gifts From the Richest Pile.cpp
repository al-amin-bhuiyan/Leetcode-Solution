class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
         priority_queue<int>pq;
         int n=gifts.size();

  long long int sum=0;

  for(int i=0;i<n;i++){
    pq.push(gifts[i]);
    sum+=gifts[i];


  }

  while(!pq.empty() and k>0){
    int x=pq.top();
    sum-=x;
    pq.pop();
    int y=sqrt(x);
    pq.push(y);
    k--;
    sum+=y;


  }
return sum;
        
    }
};