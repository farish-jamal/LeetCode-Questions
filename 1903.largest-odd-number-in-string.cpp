/*
 * @lc app=leetcode id=1903 lang=cpp
 *
 * [1903] Largest Odd Number in String
 */

// @lc code=start
class Solution {
public:
    string largestOddNumber(string num) {
        while(num.size() > 0){
            int i = num.size()-1;
            if((int)(num[i])%2 != 0){
                return num;
            }
            num.pop_back();
        }
        return "";
    }
};
// @lc code=end

