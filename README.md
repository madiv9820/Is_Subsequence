# Is Subsequence - 🚀 Iterative Two-Pointer Approach
### 🧠 Intuition
We want to check if string **`s`** is a **subsequence** of string **`t`**.

👉 Think of it like this:

    “Can we build s by scanning through t from left to right?”

We don’t need to match every character — we can **skip characters in `t`**.

### 🎯 Core Idea
We use **two pointers**:
- 🔹 **`sIndex`** → tracks position in **`s`**
- 🔹 **`tIndex`** → traverses through **`t`**

At each step:
- ✅ If characters match → move **`sIndex`**
- ⏭️ Always move forward in **`t`**

### 🔁 How It Works
```
s = "abc"
t = "ahbgdc"

t: a h b g d c
   ↑   ↑     ↑
   a   b     c  → matched in order ✔️
```
We only move forward and match characters in order.

### 📌 Algorithm Steps
1. Initialize **`sIndex = 0`**
2. Traverse through string **`t`**
3. If **`s[sIndex] == t[tIndex]`** → increment **`sIndex`**
4. If **`sIndex == len(s)`** → 🎉 return **`true`**
5. End of loop → check if all characters matched

### ⏱️ Complexity Analysis
| Type                | Complexity |
| ------------------- | ---------- |
| 🕒 Time Complexity  | **`O(n)`**     |
| 🧠 Space Complexity | **`O(1)`**     |

### ⚖️ Why This is Optimal?
#### ✅ Pros
- 🚀 Linear time (single pass)
- 📦 Constant space (no recursion stack)
- 🧼 Clean and easy to understand
- 🎯 Most expected solution in interviews

#### ❌ Cons
- Slightly less intuitive than recursion for beginners

### 💡 When to Use This Approach?
- 🔥 In interviews (most preferred solution)
- ⚡ When optimizing space (**`O(1)`**)
- 📚 When dealing with sequence matching problems

---