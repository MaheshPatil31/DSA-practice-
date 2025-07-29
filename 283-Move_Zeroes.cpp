// LeetCode 283. Move Zeroes
// https://leetcode.com/problems/move-zeroes/
class Solution{
    public :
    void moveZeroes(vector<int> & nums){
        int n = nums.size();
        vector<int> temp(n);
        if(n==1){
            return;
        }
        int j=0;
        for(int i=0; i<n; i++){
            if(nums[i]!=0){
                temp[j++]=nums[i];
            }
        }
        while(j<n){
            temp[j++]=0;
        }
        nums = temp;
    }
};
