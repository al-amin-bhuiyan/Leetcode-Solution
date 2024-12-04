class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int j = 0; 
        int i = 0;

        while (i < str1.size() && j < str2.size()) {
           
             if (str1[i] == str2[j] || ((str1[i]-'a'+1)%26 == str2[j]-'a')) {
                j++; 
            }
            i++; 
            if (j == str2.size()) return true; 
        }

        return false; 
    }
};
