#define SOLUTION_HPP
#ifdef SOLUTION_HPP

#include <string>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        /*
        🧠 Approach: Iterative Two-Pointer (Optimal)

        We traverse string `t` and try to match characters of `s`.

        - sIndex → pointer for string `s`
        - tIndex → pointer for string `t` (loop variable)

        Logic:
        - If characters match → move `sIndex`
        - Always move `tIndex`

        Goal:
        - If all characters of `s` are matched → return true

        Time Complexity:  O(n)
        Space Complexity: O(1)
        */

        // 🔹 Pointer for string `s`
        int sIndex = 0;
        
        // 🔄 Traverse through string `t`
        for(int tIndex = 0; tIndex < t.size(); ++tIndex) {

            // ✅ If all characters of `s` are matched
            if(sIndex == s.size())
                return true;

            // 🎯 If characters match
            if(s[sIndex] == t[tIndex])
                // Move pointer in `s`
                ++sIndex;
        }

        // 🔍 Final check after loop:
        // If `s` पूरी तरह match हो गया → subsequence exists
        if(sIndex == s.size())
            return true;
        
        // ❌ Otherwise, not a subsequence
        return false;
    }
};

#endif