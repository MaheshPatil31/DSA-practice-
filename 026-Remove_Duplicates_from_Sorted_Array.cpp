// leetcode 026. Remove Duplicates from Sorted Array
// https://leetcode.com/problems/remove-duplicates-from-sorted-array/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int n = nums.size();
    int temp;
    int j=0;
    int count=0;
    for(int i=0 ; i<n; i++){
        if(nums[j]!=nums[i]){
            nums[++count]=nums[i];
            j=i;
        }
    }
    return ++count;
        
}
};
