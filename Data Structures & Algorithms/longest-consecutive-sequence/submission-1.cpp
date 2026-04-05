class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>p;
        int longest = 0;
        for(int num: nums){
            p.insert(num);
        }
        for(int num: nums){
            if(!p.count(num-1)){
                int current = num;
                int length = 1;
                while(p.count(current+1)){
                    current++;
                    length++;
                }
                longest = max(longest, length);
            }
        }
        return longest;
    }
};
