/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        stack<string>st;

        for(int i = 0; i<s.size(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                st.push(s[i]);
            }else{
                if(st.empty()) return false;
                char ch = st.top();
                st.pop();
                if(s[i] == ')' && ch == '(');
                else if(s[i] == ']' && ch == '[');
                else if(s[i] == '}' && ch == '{');
                else return false;
            }
        }
        if(!st.empty()) return false;
        return true;
    }
};
// @lc code=end

