class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.size(), n2 = s2.size();
        if(n1 > n2) return false;

//enter the first window in the frequency table
        vector<int> freq1(26,0), freq2(26,0);
        for(int i = 0; i < n1; i++){
            freq1[s1[i] - 'a']++;
            freq2[s2[i] - 'a']++;
        }

//check the first window
        if(freq1 == freq2) return true;

        for(int i = n1; i < n2; i++){
            //add the new chars
            freq2[s2[i] - 'a']++;

            //remove the old chars
            freq2[s2[i - n1] - 'a']--;

            if(freq1 == freq2) return true;
        }
        return false;
    }
};
