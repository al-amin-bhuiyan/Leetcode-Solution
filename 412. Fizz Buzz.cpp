class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>str;
   for(int i=1;i<=n;i++){

    if(i%5==0 and i%3==0){
        str.emplace_back("FizzBuzz");
    }
    else if(i%3==0){
        str.emplace_back("Fizz");
    }
    else if(i%5==0){
        str.emplace_back("Buzz");
    }
    else{
        str.emplace_back(to_string(i));
    }
   }
   return str;
        
    }
};