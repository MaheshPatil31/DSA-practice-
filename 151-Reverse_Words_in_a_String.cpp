// leetcode 151. Reverse Words in a String 
// https://leetcode.com/problems/reverse-words-in-a-string/
class Solution {
public:
    string reverseWords(string s) {
        unordered_map<int, string> map;
        string ans;
        int count=0;
        bool word=false;
        for(int i=0; i<s.length() ;i++){
            if(isalnum(s.at(i))){
                word =true;
                map[count] += s.at(i);
            }
            if( word && s.at(i)==' ') {
                count++;
                word = false;
            }
        }
        if(word) count++;
        for(int i=count-1; i>=0; i--){
            ans += map[i];
            if(i>0) ans += ' ';
        }
        return ans;
    }
};
