# [🧵 Is Subsequence](https://leetcode.com/problems/is-subsequence/?envType=study-plan-v2&envId=top-interview-150)
Given two strings **`s`** and **`t`**, the objective is to determine whether `**s**` is a **subsequence** of **`t`**.

A subsequence is formed by deleting zero or more characters from the original string **without altering the relative order** of the remaining characters.

### 📌 Key Idea
The problem focuses on verifying whether all characters of **`s`** can be found in **`t`** **in the same order**, though not necessarily contiguously.

### 🧠 Examples
#### Example 1
```
Input:  s = "abc", t = "ahbgdc"
Output: true
```
**Explanation:** <br>
Characters **`'a'`**, **`'b'`**, and **`'c'`** appear in **`t`** in the correct order.

#### Example 2
```
Input:  s = "axc", t = "ahbgdc"
Output: false
```
**Explanation:** <br>
While **`'a'`** appears in **`t`**, the character **`'x'`** does not, so **`s`** cannot be formed.

### 🔒 Constraints
- **`0 ≤ s.length ≤ 100`**
- **`0 ≤ t.length ≤ 10⁴`**
- **`s`** and **`t`** consist only of lowercase English letters

### 🚀 Follow-up
Suppose there are multiple incoming strings **`s₁, s₂, ..., sₖ`** where **`k ≥ 10⁹`**, and each needs to be checked against the same string **`t`**.

In this case, the solution should be optimized to handle repeated queries efficiently by minimizing redundant computation.

### 💭 Summary
- A subsequence preserves **relative order**
- Characters do not need to be contiguous
- Efficient handling is required when processing multiple queries against the same string **`t`**

## Approaches 🚴🏽‍♂️
| **🚀 Feature / Aspect**     | [**🔁 Recursive Two-Pointer**](https://github.com/madiv9820/Is_Subsequence/tree/Approach_01-Recursion)               | [**⚡ Iterative Two-Pointer**](https://github.com/madiv9820/Is_Subsequence/tree/Approach_02-Iteration) |
| ----------------------- | -------------------------------------- | --------------------------------- |
| 🧠 Core Idea            | Match or skip using recursion          | Traverse `t` once and match `s`   |
| 🎯 Approach Style       | Top-down recursion                     | Linear scan (loop-based)          |
| 🔹 Pointer Handling     | Indices passed recursively             | Indices managed in loop           |
| ⏱️ Time Complexity      | `O(n)`                                 | `O(n)`                            |
| 🧠 Space Complexity     | `O(n)` (recursion stack)               | `O(1)` (constant space)           |
| 🚀 Performance          | Slightly slower (function calls)       | Faster (no overhead)              |
| 📦 Memory Usage         | Higher                                 | Minimal                           |
| 🧼 Readability          | More intuitive (step-by-step thinking) | Cleaner & concise                 |
| 🎓 Learning Value       | Great for understanding recursion      | Best for practical use            |
| 💼 Interview Preference | 👍 Good (if asked recursion)           | ⭐ Most preferred solution         |
| ⚠️ Risk                 | Stack overflow (large input)           | No such risk                      |

---