

class Solution {
public:
    bool isPalindrome(string s) {
        
        string y="";
        for(int i=0;i<s.length();i++){
            if(isalpha(s[i])||isdigit(s[i])) y+=tolower(s[i]);
        }
        int j=y.length()-1;
        cout<<y;
        for(int i=0;i<y.length();i++){
            if(y[i]!=y[j]) return false;
            j--;
        }
        return true;
    }
};
