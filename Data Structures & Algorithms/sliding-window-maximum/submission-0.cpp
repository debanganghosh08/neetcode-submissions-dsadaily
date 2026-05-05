class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> result;
        int n = nums.size();
        int left = 0, right = n - 1;
        while(left < n - k + 1){
            int maxele = nums[left];
            for(int i = left; i < left+k; i++){
                maxele = max(maxele, nums[i]);
            }
            result.push_back(maxele);
            left++;
        }
        return result;
    }
};
