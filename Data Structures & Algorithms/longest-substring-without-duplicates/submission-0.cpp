class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> elements;
        int left = 0, maxlen = 0;
        for(int right = 0; right < s.length(); right++){

            //shrink window when found duplicate
            while(elements.count(s[right])){
                elements.erase(s[left]);
                left++;
            }

            //add current character to the hashset
            elements.insert(s[right]);

            //update maxlength
            maxlen = max(maxlen, right-left+1);
        }
        return maxlen;
    }
};
