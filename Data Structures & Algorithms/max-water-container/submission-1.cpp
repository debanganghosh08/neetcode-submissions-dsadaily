class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxwater = 0;
        int n = heights.size();
        int left = 0, right = n - 1;
        while(left < right){
            int water = min(height[left], height[right]) * (right - left);
            if(heights[left] < heights[right]){
                left++;
            }else{
                right--;

            }
            maxwater = max(maxwater, water);
        }
        return maxwater;
    }
};
