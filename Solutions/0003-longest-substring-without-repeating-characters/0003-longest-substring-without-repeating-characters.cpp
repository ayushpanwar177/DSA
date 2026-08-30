class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        vector<bool>freq(256,0);
         int i=0;
        int j=0;
        int count=0;
        while(j<s.size()){
            while(freq[s[j]]){
                freq[s[i]]=0;
                i++;
            }
            freq[s[j]]=1;
            count=max(count,j-i+1);
            j++;
        }
        return count;
    }
};