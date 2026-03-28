#define SOLUTION_HPP
#ifdef SOLUTION_HPP

#include <string>
#include <functional>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        /*
        🧠 Approach: Recursion using Lambda (Two Pointers)

        We simulate two pointers using indices:
        - sIndex → pointer for string `s`
        - tIndex → pointer for string `t`

        Logic:
        - If characters match → move both pointers
        - If not → move only `t` pointer

        Time Complexity:  O(n)
        Space Complexity: O(n) due to recursion stack
        */

        // 🔁 Recursive lambda function
        function<bool(int, int)> checkIsSubsequnce = [&](int sIndex, int tIndex) -> bool {

            // ✅ Base Case 1:
            // All characters of `s` are matched
            if(sIndex == s.size())
                return true;

            // ❌ Base Case 2:
            // `t` is exhausted but `s` is not
            if(tIndex == t.size())
                return false;
            
            // 🎯 If current characters match
            if(s[sIndex] == t[tIndex])
                // Move both pointers forward
                return checkIsSubsequnce(sIndex + 1, tIndex + 1);
            
            // 🔄 If characters do not match
            // Skip current character of `t`
            return checkIsSubsequnce(sIndex, tIndex + 1);
        };

        // 🚀 Start recursion from index 0 of both strings
        return checkIsSubsequnce(0, 0);
    }
};

#endif