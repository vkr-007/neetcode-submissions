class Solution {
public:
    bool isValid(string s) {

        if (!s.empty() && (s[0] == ']' || s[0] == ')' || s[0] == '}'))
            return false;

        stack<char> q;

        for (int i = 0; i < s.size(); i++) {

            if (!q.empty() && q.top() == '(' && s[i] == ')') {
                q.pop();
            }
            else if (!q.empty() && q.top() == '{' && s[i] == '}') {
                q.pop();
            }
            else if (!q.empty() && q.top() == '[' && s[i] == ']') {
                q.pop();
            }
            else {
                q.push(s[i]);
            }
        }

        return q.empty();
    }
};