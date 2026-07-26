// 011-Contaner_With_Moist_Water.cpp
// leetcode 011 Container with most water 
// https://leetcode.com/problems/container-with-most-water
class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j = height.size()-1;
        int area = 0 ;
        while (i < j) {
        int width = j - i;
        area = max(area, min(height[i], height[j]) * width);
        if (height[i] < height[j])
            i++;
        else
            j--;
        }
        return area;
    }
};
