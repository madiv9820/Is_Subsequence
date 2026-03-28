class pySolution:
    def py_isSubsequence(self, s: str, t: str) -> bool:
        """
        🧠 Approach: Iterative Two-Pointer (Optimal)

        We traverse string `t` and try to match characters of `s`.

        - sIndex → pointer for string `s`
        - tIndex → pointer for string `t` (loop variable)

        Logic:
        - If characters match → move `sIndex`
        - Always move through `t`

        Goal:
        - If all characters of `s` are matched → return True

        Time Complexity:  O(n)
        Space Complexity: O(1)
        """

        # 🔹 Pointer for string `s`
        sIndex: int = 0

        # 🔄 Traverse through string `t`
        for tIndex in range(len(t)):

            # ✅ If all characters of `s` are matched
            if sIndex == len(s):
                return True

            # 🎯 If characters match
            if s[sIndex] == t[tIndex]:
                # Move pointer in `s`
                sIndex += 1
        
        # 🔍 Final check after loop:
        # If `s` is fully matched → subsequence exists
        if sIndex == len(s):
            return True

        # ❌ Otherwise, not a subsequence
        return False