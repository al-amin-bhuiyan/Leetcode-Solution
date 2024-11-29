class Solution {
public:
    int titleToNumber(string str) {
        
 int    result=str[0]-'A'+1;

 for(int i=1;i<str.size();i++){
    result+=result*25+(str[i]-'A'+1);

 }
return result;

        
    }
};