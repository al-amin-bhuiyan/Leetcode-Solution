class Solution {
public:
    int minimumLines(vector<vector<int>>& rectangles) {
        if(rectangles.size()==1)return 0;
       // map<pair<int,int>,int>mp;



   // vector<vector<int>>rectangles={{1,7},{2,6},{3,5},{4,4},{5,4},{6,3},{7,2}};

    // map<int,int>mpp;
     int result=1;

   sort(rectangles.begin(),rectangles.end());

    for(int i=2;i<rectangles.size();i++){

        int x1=rectangles[i-2][0];
        int x2=rectangles[i-1][0];
        int x3=rectangles[i][0];

        int y1=rectangles[i-2][1];
          int y2=rectangles[i-1][1];
            int y3=rectangles[i][1];


            int dif1=(y3-y2)*1ll*(x2-x1);

            int dif2=(x3-x2)*1ll*(y2-y1);

            if(dif1!=dif2)result++;



    }
   return result;

   /* for(auto it:mp){
        cout<<it.first.first<<sp<<it.first.second<<sp<<it.second<<nl;
    }
      for(auto it:mpp){
        cout<<it.first<<sp<<it.second<<nl;
    }*/
    }
};