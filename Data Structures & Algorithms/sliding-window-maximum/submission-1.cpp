class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> result;
        int n = nums.size();
        for(int i = 0; i <= n - k; i++){
            int maxele = nums[i];
            for(int j = i; j < i + k; j++){
                maxele = max(maxele, nums[j]);
            }
            result.push_back(maxele);
        }
        return result;
    }
};
