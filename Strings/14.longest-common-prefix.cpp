/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        int n = strs.size();
        string result = "";

        for(int i = 0; i<min(strs[0].size(), strs[n-1].size()); i++){
            if(strs[0][i] != strs[n-1][i]){
                break;
            }
            result += strs[0][i]; 
        }
        return result;
    }
};
// @lc code=end

