class Solution {
public:
    int isPrefixOfWord(string str, string s) {
             stringstream ss(str);
     string word;

    int wordIndex = 1; 

    while (ss >> word) {
      
        if (word.find(s) ==0) {
            return wordIndex;
        
        }  wordIndex++;
    }
   return -1;
        
    }
};