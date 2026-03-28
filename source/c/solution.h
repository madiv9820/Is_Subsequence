#define SOLUTION_H
#ifdef SOLUTION_H

#include <stdbool.h>

bool isSubsequence(char* s, char* t) {
    /*
    🧠 Approach: Recursion (Pointer-based)

    Instead of using indices, we move pointers directly:
    - If characters match → move both pointers
    - If not → move only `t` pointer

    Time Complexity:  O(n)
    Space Complexity: O(n) due to recursion stack
    */

    // ✅ Base Case 1:
    // If `s` is empty ('\0' reached),
    // all characters have been matched → valid subsequence
    if(s[0] == '\0')
        return true;

    // ❌ Base Case 2:
    // If `t` is empty but `s` is not,
    // subsequence cannot be formed
    if(t[0] == '\0')
        return false;

    // 🎯 If current characters match
    if(s[0] == t[0])
        // Move both pointers forward
        return isSubsequence(s + 1, t + 1);
    
    // 🔄 If characters do not match
    // Skip current character of `t` and try next
    return isSubsequence(s, t + 1);
}

#endif