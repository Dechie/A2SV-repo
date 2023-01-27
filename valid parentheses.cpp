class Solution {
public:
    bool isValid(string s) {
        int n = s.length();

        stack<char> hold;

        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                hold.push(s[i]);
            }

            else {
                
                if (hold.empty() || (hold.top() == '(' && s[i] != ')') || (hold.top() == '{' && s[i] != '}') || (hold.top() == '[' && s[i] != ']'))
                    return false;
                hold.pop();
            }

        }

        return hold.empty();
    }
};
