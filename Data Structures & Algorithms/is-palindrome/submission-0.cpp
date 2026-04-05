class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(remove_if(s.begin(),s.end(), [](unsigned char c){return !isalnum(c);
        }),s.end());

        //Convert to lowercase
        transform(s.begin(), s.end(), s.begin(), [](unsigned char c){
            return tolower(c);
        });
    
        string reverse_str = s;
        reverse(reverse_str.begin(), reverse_str.end());
    
        for(int i = 0; i < s.length(); i++){
            if(s[i] != reverse_str[i]) return false;
        }
        return true;
    }
};
