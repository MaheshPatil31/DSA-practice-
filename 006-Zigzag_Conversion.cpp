// leetcode 6. Zigzag Conversion
// https://leetcode.com/problems/zigzag-conversion/
class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows<=1) return s;
        vector<string> ans(numRows);
        bool goingdown = false;
        int count=0;
        for(int i=0; i<s.length(); i++){
            if(count == 0 || count==numRows-1) goingdown=!goingdown ;
        
        ans.at(count) += s.at(i);
        if(goingdown) count++;
        else count--;
        }
    string ans2;
    for(int i=0; i<numRows; i++){
        ans2 += ans.at(i); 
    }
    return ans2;
}
};
