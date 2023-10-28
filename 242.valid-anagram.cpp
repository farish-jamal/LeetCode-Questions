/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {

        map<char, int>mpp1;

        for(auto it:s) mpp1[it]++;
        for(auto it:t) mpp1[it]--;

        for(auto it: mpp1){
            if(it.second != 0) return false;
        }

        // if(mpp1 == mpp2) return true;
        return true;
         
        
    }
};
// @lc code=end

