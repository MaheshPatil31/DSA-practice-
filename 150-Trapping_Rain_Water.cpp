// 150. Trapping Rain Water
// https://neetcode.io/problems/trapping-rain-water/question

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> prefix(n) ;
        prefix[0] = height[0];
        for(int i = 1; i<n ; i++){
            prefix[i] = max(prefix[i-1], height[i]);
        }
        vector<int> suffix(n) ;
        suffix[n-1] = height[n-1];
        for(int i = n-2 ; i >= 0; i--){
            suffix[i] = max(suffix[i+1], height[i]);
        }
        int water = 0 ;
        for(int i = 0 ; i<n ; i++){
            water += min(prefix[i], suffix[i]) - height[i];
        }
        return water;
    }
};
