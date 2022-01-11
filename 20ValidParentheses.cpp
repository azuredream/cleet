class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for (auto c : s) {
            if (c == '(' || c == '[' || c == '{') {
                stk.push(c); 
            } else if(stk.empty() == true) {          //if comment out this part, stk.top() when stk is empty would see an address error. Hard to debug.
                return false;
            } else if ((stk.top() == '(' && c == ')') || (stk.top() == '[' && c == ']') || (stk.top() == '{' && c == '}')) {
                stk.pop();
            } else {
                return false;
            }
        }
        if (stk.empty() == true) {
            return true;
        }
        return false;
    }
};