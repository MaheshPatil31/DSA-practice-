// leetcode 136. Single Number 
// https://leetcode.com/problems/single-number/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        for(int i= 0 ; i+1< nums.size(); i++){
            nums[i+1]= nums[i] ^ nums[i+1];
        }
        return nums[nums.size()-1] ;
    }
};
