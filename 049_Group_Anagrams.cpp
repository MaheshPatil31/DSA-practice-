class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if ( strs.size()==0) return {{""}};
        if ( strs.size()==1) return {strs};
        unordered_map<string, string> map;
        vector<string> temp = strs;
        for(int i =0; i<strs.size();  i++) sort(strs[i].begin(), strs[i].end()) ;
        for(int i =0; i<strs.size();  i++) map[strs[i]] =  temp[i] ;
        return map ; 
    }
};
