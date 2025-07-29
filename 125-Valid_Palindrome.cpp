// leetcode 125. Valid Palindrome 
// https://leetcode.com/problems/valid-palindrome/
class Solution {
public:
    bool isPalindrome(string s) {
        vector<int> v;
        v.reserve(s.length());
        for(int i=0 ; i<s.length(); i++){
        if(isalnum(s.at(i))) v.push_back(i);
        }
        for(char &c : s) c = tolower(c);
        if(v.size()<=1) return true ;
        int right=v.size()-1;
        for(int i=0; i<v.size()/2; i++){
            if(s.at(v[i])!=s.at(v[right--])) return false;
        }
        return true;
    }
};
