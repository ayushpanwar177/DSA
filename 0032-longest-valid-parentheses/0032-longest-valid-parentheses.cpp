class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        for (int i = 0; i < s.length(); i++) {
            if (!st.empty() && s[i] == ')' && s[st.top()] == '(')
                st.pop();
            else
                st.push(i);
        }

        int index = s.length();
        int maxLen = 0;
        while (!st.empty()) {
            maxLen = max(maxLen, index - st.top() - 1);
            index = st.top();
            st.pop();
        }
        maxLen = max(maxLen, index);

        return maxLen;
    }
};