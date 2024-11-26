class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        int n=arr.size();
        int m=arr[0].size();
         int low=0,high=(n*m)-1;

  while(low<=high){
    int mid=(low+high)/2;
    int x=mid/m;
    int y=mid%m;
    if(arr[x][y]==target){
      return true;
    }
    else if(arr[x][y]>target){high=mid-1;}
    else {low=mid+1;}
  }
  return false;
        
    }
};