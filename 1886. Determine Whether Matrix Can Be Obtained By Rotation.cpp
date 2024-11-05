class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) { 
        int n=mat.size();
        bool a=true,b=true,c=true,d=true;
        //check whater is 90 degree or 180 degree or 270 degree or 360 degree
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          if(mat[i][j]!=target[i][j]) a=false;
			if(mat[i][j]!=target[n-j-1][i])b=false;
			if(mat[i][j]!=target[n-i-1][n-j-1])c=false;
			if(mat[i][j]!=target[j][n-i-1]) d=false;

        }
        }
         return a or b or c or d;

      
       
    }
      

    

        
    
};