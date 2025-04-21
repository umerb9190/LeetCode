class Solution {
public:
    bool isValid(string s) {
        stack<char> s1;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                s1.push(')');
            } else if (s[i] == '{') {
                s1.push('}');
            } else if (s[i] == '[') {
                s1.push(']');
            } else {
                if (s1.empty() || s1.top() != s[i]) {
                    return false;
                }
                s1.pop();
            }
        }
        return s1.empty(); 
    }
};
