// leetcode 392. Is Subsequence
// https://leetcode.com/problems/is-subsequence/
class Solution {
public:
bool isSubsequence(string s, string t) {
    int temp=0;
for(int i=0; i<t.length() && temp<s.length() ; i++){
if(t.at(i)==s.at(temp)) temp++;
}
return temp==s.length() ? true : false ;
}
};
