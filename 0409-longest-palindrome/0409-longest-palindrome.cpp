class Solution {
public:
    int longestPalindrome(string s) {
        int ocount = 0;
        unordered_map<char, int> mp;
        for(char ch : s) {
            mp[ch]++;
            if (mp[ch] % 2 == 1){
                ocount++;
            }
            else {
                ocount--;
            }
        }
        if (ocount > 1){
            return s.length() - ocount + 1;
        }
        return s.length();
    }
};