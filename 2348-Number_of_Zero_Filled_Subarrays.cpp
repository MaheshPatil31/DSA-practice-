// leetcode 2348. Number of Zero-Filled Subarrays
// https://leetcode.com/problems/number-of-zero-filled-subarrays/
class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int count =0;
        long long ans =0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]==0){
                count++;
            }
            else{
                ans+=((long long)count *(count+1))/2 ;
                count =0;
            }
            
        }
        ans+=((long long) count * (count +1) )/2 ;
        return ans;
    }
};
