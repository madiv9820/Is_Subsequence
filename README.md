# 🧵 Is Subsequence - Recursive Two-Pointer Approach
### 🚀 Intuition
Imagine you're trying to f**ind string `s` inside string `t`** — but you're allowed to skip characters in **`t`**.

We simulate this using **two pointers recursively**:
- 🔹 One pointer for **`s`** → **`sIndex`**
- 🔹 One pointer for **`t`** → **`tIndex`**

At every step:
- ✅ If characters match → move both pointers
- ⏭️ If not → skip character in **`t`** and move ahead

### 🔁 Recursive Strategy
We define a recursive function:
- If we've matched all characters of **`s`** → **🎉 return true**
- If **`t`** is exhausted before **`s`** → **❌ return false**

### 🎯 Key Idea
    “Try to match current character. If not possible, skip and keep searching.”

This naturally fits recursion because:
- Each decision reduces the problem size
- We explore the sequence step-by-step

### 📌 Dry Run
```
s = "abc"
t = "ahbgdc"

a == a ✅ → move both
b != h ❌ → skip h
b == b ✅ → move both
c != g ❌ → skip g
c == c ✅ → move both

✔️ Subsequence found!
```

### ⏱️ Complexity Analysis
| Type                | Complexity               |
| ------------------- | ------------------------ |
| 🕒 Time Complexity  | **`O(n)`**                   |
| 🧠 Space Complexity | **`O(n)`** (recursion stack) |

### ⚖️ Pros & Cons
#### ✅ Pros
- Clean and intuitive logic 🧼
- Easy to understand recursion flow 🔁
- Direct mapping to problem statement 🎯
#### ❌ Cons
- Uses extra space due to recursion stack 📦
- Not optimal compared to iterative approach (which is **`O(1)`** space)

### 💡 When to Use This Approach?
- When learning recursion fundamentals 📚
- When problem involves **order-preserving matching**
- When clarity is preferred over optimization

---