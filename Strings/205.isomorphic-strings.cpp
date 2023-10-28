/*
 * @lc app=leetcode id=205 lang=cpp
 *
 * [205] Isomorphic Strings
 */

// @lc code=start
class Solution {
public:
    bool isIsomorphic(string s, string t) {

        map<char, char>mpp;
        map<char, char>mpp2;

        for(int i = 0; i<t.size(); i++){
            if(mpp.find(s[i]) == mpp.end() && mpp2.find(t[i]) == mpp2.end()){
                mpp[s[i]] = t[i];
                mpp2[t[i]] = s[i];
            }
            else if(mpp[s[i]] != t[i]){
                    return false;
            }
        }
        return true;
    }
};
// @lc code=end

