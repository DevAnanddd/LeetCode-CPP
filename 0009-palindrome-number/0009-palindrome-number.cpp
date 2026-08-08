class Solution {
public:
    bool isPalindrome(int x) {
        int original=x;
        long long reverse=0;
       while(x>0) {
           int ans= x%10;
    reverse = reverse*10+ans;
     x=x/10;


        }
    if(original==reverse){
        return true;
    }
    else{
        return false;
    }
    }
    };
