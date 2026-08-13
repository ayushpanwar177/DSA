class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        int a ,b,output;
        for(int i=0 ; i<tokens.size();i++){
            if(tokens[i]!= "+" &&tokens[i]!= "-" &&tokens[i]!= "*" &&tokens[i]!= "/"  ){
                s.push(stoi(tokens[i]));
            }
            else if(tokens[i]=="+"){
                a=s.top();
                s.pop();
                b=s.top();
                s.pop();
                s.push(b+a);
            }
            else if(tokens[i]=="-"){
                a=s.top();
                s.pop();
                b=s.top();
                s.pop();
                s.push(b-a);
            }
            else if(tokens[i]=="*"){
                 a=s.top();
                s.pop();
                b=s.top();
                s.pop();
                s.push(b*a);
            }
            else if(tokens[i]=="/"){
                a=s.top();
                s.pop();
                b=s.top();
                s.pop();
                s.push(b/a);
            }

        }
        return s.top();
    }
};