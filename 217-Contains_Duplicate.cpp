// leetcode 217. Contains Duplicate 
// https://leetcode.com/problems/contains-duplicate/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_map<int , int> freq;
        for(int num : nums){
            freq[num]++;
        }
        for(const auto& pair : freq){
            if(pair.second>1){
                return true;
            }
        }
        return false;
    }
};
