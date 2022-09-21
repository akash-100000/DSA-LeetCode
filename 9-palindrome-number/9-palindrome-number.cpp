class Solution {
public:
    bool isPalindrome(int x) {
        long reverse = 0;
        
        long temp = x;
         while(x){
              if(x<0){
            return 0;
        }
           reverse = reverse*10+x%10;
            x = x/10;
        }
       return temp==reverse;
        
    }
};