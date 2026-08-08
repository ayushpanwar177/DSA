class Solution {
public:
    bool checkValidString(string s) {
        stack<char> bracket, star;
        for(int i=0; i<size(s); i++)
        {
            if(s[i] == '(')
                bracket.push(i);
            else if(s[i] == '*')
                star.push(i);
            else{
                if(!bracket.empty())
                    bracket.pop();

                else if(!star.empty())
                    star.pop();
                else
                    return false;
            }
        }
        while(!bracket.empty() && !star.empty() && star.top() > bracket.top())
        {
            bracket.pop();
            star.pop();
        }
        return bracket.empty();
    }
};