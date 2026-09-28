class Solution {
public:
    int maxDepth(string s) {
        int cnt=0; int maxcnt=INT_MIN;
         for(int i=0;i<s.size();i++){
            if(s[i]=='('){
            s.push_back(s[i]);
            cnt++;
            if(cnt>maxcnt)
            maxcnt=cnt;
            }
            else if(s[i]==')')
            {
            s.pop_back();
            cnt--;
            }
         }
            if(maxcnt==INT_MIN)
            return 0;
            return maxcnt;
    }
};