class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxwater = 0;
        int n = heights.size();
        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                int water = (min(heights[i], heights[j]))*(j-i);
                maxwater = max(maxwater, water);
            }
        }
        return maxwater;
    }
};
