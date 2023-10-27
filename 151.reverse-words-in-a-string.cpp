/*
 * @lc app=leetcode id=151 lang=cpp
 *
 * [151] Reverse Words in a String
 */

// @lc code=start
class Solution {
public:
    string reverseWords(string s) {

        string result = "";
        stack<string>st;

        for(int i = 0; i<s.size(); i++){
            if(s[i] == ' ') continue;
            string word = "";
            while(i < s.size() && s[i] != ' '){
                word += s[i];
                i++;
            }
            st.push(word);
        }

        while(!st.empty()) {
            result += st.top();
            st.pop();
            if(!st.empty()) result += ' ';
        }

        return result;
        
    }
};
// @lc code=end

