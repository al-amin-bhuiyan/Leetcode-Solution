//Rotate 90 degree of 2D matrix

    // 1->Transpose Matrix
    // 2->Reverse each row

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
          for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
        
    }
};