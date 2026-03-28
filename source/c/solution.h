#define SOLUTION_H
#ifdef SOLUTION_H

#include <stdbool.h>

bool isSubsequence(char* s, char* t) {
    /*
    🧠 Approach: Iterative Two-Pointer (Optimized)

    We traverse string `t` once and try to match characters of `s`.

    - `sIndex` → tracks position in string `s`
    - `tIndex` → iterates over string `t`

    Logic:
    - If characters match → move `sIndex`
    - Always move `tIndex`
    
    Goal:
    - If we reach end of `s`, all characters matched → subsequence exists

    Time Complexity:  O(n)
    Space Complexity: O(1)
    */

    // 🔹 Pointer for string `s`
    int sIndex = 0;

    // 🔄 Traverse through string `t`
    for(int tIndex = 0; t[tIndex] != '\0'; ++tIndex) {

        // ✅ If all characters of `s` are matched
        if(s[sIndex] == '\0')
            return true;

        // 🎯 If current characters match
        if(s[sIndex] == t[tIndex])
            // Move pointer in `s`
            ++sIndex;
    }

    // 🔍 Final check after loop:
    // If `s` is fully matched → subsequence exists
    if(s[sIndex] == '\0')
        return true;

    // ❌ Otherwise, not a subsequence
    return false;
}

#endif