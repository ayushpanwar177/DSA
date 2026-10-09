class Solution {
public:
    int minInsertions(string s) {
        int res=0,n = s.size();
        stack<char> st;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(')
                st.push('(');
            else if (i < n - 1 && s[i] == s[i + 1]) {
                if (!st.empty()) {
                    st.pop();
                    i++;
                } else {
                    res++;
                    i++;
                }
            } else if (s[i] == ')') {
                if (st.empty()) {
                    res += 2;
                } else {
                    res++;
                    st.pop();
                }
            }
        }
        if (!st.empty()) {
            res += st.size() * 2;
        }
        return res;
    }
};