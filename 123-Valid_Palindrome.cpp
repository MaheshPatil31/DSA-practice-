class Solution {
public:
    bool isPalindrome(string s) {
        int j=s.length()-1;
        for(int i = 0; i <= j ; i++){
            if(!(isalnum(s[i]))) continue ;
            if(!(isalnum(s[j]))){
                i--;
                j--;
                continue;
            }
            s[i] = tolower(s[i]);
            s[j] = tolower(s[j]);
            if(s[i]!=s[j--]) return false;
        }
        return true ;
    }
};
