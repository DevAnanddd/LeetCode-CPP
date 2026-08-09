class Solution {
private:
bool valid(char n){
    if( (n >='a' && n<= 'z') ||( n >= '0' && n<= '9') || (n>= 'A' && n <= 'Z' )){
        return 1;
    }
    else{
        return 0;
    }
}
char uppertolowercase(char n){
    if ((n >= 'a' && n <= 'z') || (n >= '0' && n <= '9')){
        return n;
    }
    else{
      return  n = n - 'A' + 'a';
    }
}

bool checkpalindrome(string n){
    int s =0;
    int e = n.length()-1;

  while(s<=e){
    if(n[s]!=n[e]){
        return false;
    }
    else{
        s++;
        e--;
    }
  }
  return true;
}

public:
    bool isPalindrome(string s) {
        
        string temp;

        for(int j=0;j<s.length();j++){
            if(valid(s[j])){
                temp.push_back(s[j]);
            }
        }

        for(int j=0;j<temp.length();j++){
            temp[j]= uppertolowercase(temp[j]);
        }
        return checkpalindrome(temp);
        
    }
};