class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> tk_token;
        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] == "+") {
                int a = tk_token.top();
                tk_token.pop();
                int b = tk_token.top();
                tk_token.pop();
                tk_token.push(b+a);
            }else if (tokens[i] == "-") {
                int a = tk_token.top();
                tk_token.pop();
                int b = tk_token.top();
                tk_token.pop();
                tk_token.push(b-a);
            }else if (tokens[i] == "*") {
                int a = tk_token.top();
                tk_token.pop();
                int b = tk_token.top();
                tk_token.pop();
                tk_token.push(b*a);
            }else if (tokens[i] == "/") {
                int a = tk_token.top();
                tk_token.pop();
                int b = tk_token.top();
                tk_token.pop();
                tk_token.push(b/a);
            }else
                tk_token.push(stoi(tokens[i]));
        }
        return tk_token.top();
    }

};