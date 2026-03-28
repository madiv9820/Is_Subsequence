class pySolution:
    def py_isSubsequence(self, s: str, t: str) -> bool:
        """
        🧠 Approach: Recursion (Two Pointers Simulation)

        We try to match characters of string `s` inside string `t`
        while maintaining order.

        - If characters match → move both pointers
        - If not → move only `t` pointer

        Time Complexity:  O(n)
        Space Complexity: O(n) due to recursion stack
        """

        def checkIsSubsequence(sIndex: int = 0, tIndex: int = 0) -> bool:
            """
            🔁 Recursive helper function

            Parameters:
            - sIndex → pointer for string `s`
            - tIndex → pointer for string `t`
            """

            # ✅ Base Case 1:
            # If we've matched all characters of `s`,
            # it means `s` is a valid subsequence of `t`
            if sIndex == len(s):
                return True

            # ❌ Base Case 2:
            # If `t` is exhausted but `s` is not,
            # then subsequence is not possible
            if tIndex == len(t):
                return False

            # 🎯 If current characters match
            if s[sIndex] == t[tIndex]:
                # Move both pointers forward
                return checkIsSubsequence(sIndex + 1, tIndex + 1)

            # 🔄 If characters do not match
            # Skip current character of `t` and try next
            return checkIsSubsequence(sIndex, tIndex + 1)

        # 🚀 Start recursion from index 0 of both strings
        return checkIsSubsequence()