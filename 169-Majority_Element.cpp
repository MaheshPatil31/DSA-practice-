// leetcode 169. Majority Element 
// https://leetcode.com/problems/majority-element/
class Solution{
    public :
    int majorityElement(vector<int> & nums){
        unordered_map<int , int> temp;
        int n = nums.size();
        for(int num : nums){
            temp[num]++;
        }
        for(auto fre : temp){
            if(fre.second > n/2){
                return fre.first;
            }
        }
        return -1;
        
    }
};
