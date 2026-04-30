class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlength = 0;
        unordered_set<char>freq;
        int left = 0;
        for(int right = 0; right < s.length(); right++){
            //if in freq then remove if we find same element
            while(freq.count(s[right])){
                freq.erase(s[left]);
                left++;
            }
            freq.insert(s[right]);
            maxlength = max(maxlength, right - left + 1);
        }
        return maxlength;
    }
};
