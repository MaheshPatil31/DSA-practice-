// leetcode 14. Longest Common Prefix
// https://leetcode.com/problems/longest-common-prefix/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs){
        if(strs.size()==1) return strs[0];
        string prefix = strs[0];
        int count=0;
        int first=prefix.size();
        for(int i=0; i<strs.size(); i++){
            while(count < prefix.size() && count < strs[i].size() && prefix[count] == strs[i][count]) {
                count++;
            }
            if(count==0) return "";
            else first =min(first,count);
            count =0;
        
        }
        string ans = "";
        for(int i=0; i<first; i++) ans+=prefix[i]; 
        if(ans.empty()) return "";
        return ans;
        
    }
};
