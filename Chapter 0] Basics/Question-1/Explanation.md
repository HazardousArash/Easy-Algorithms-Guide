# 🧾 Solution: Sum of First N Numbers

This problem can be solved in two different ways — a **loop-based approach** and a **formula-based approach**.

Let's walk through both and understand why the formula is faster.

---

## 🌀 Solution 1: Using a Loop (O(n))

```cpp
#include <iostream> 
using namespace std; 

int main() 
{
    int number = 0;       
    cin >> number;        

    int sum = 0;          // Start from 0

    // Add numbers from 1 to n
    for (int i = 1; i <= number; ++i)
    {
        sum += i;
    }

    cout << sum;          // Print the result
}
```

### 🧠 Explanation:

- We loop from `1` to `n`
- At each step, we add the current number to the total `sum`
- Time complexity is **O(n)** because we’re performing `n` additions

### ❗ Downsides:

- Slower for large values of `n` (like 10^9)
- Repetitive loop logic — not very elegant

---

## ⚡ Solution 2: Using a Formula (O(1))

```cpp
#include <iostream> 
using namespace std; 

int main()
{
    int number = 0;
    cin >> number;

    int sum = (number * (number + 1)) / 2;

    cout << sum;
}
```

### 🧠 Explanation:

We use the well-known formula for the sum of the first `n` natural numbers:
```
sum = n * (n + 1) / 2
```

This gives the result in **constant time**, no matter how big `n` is.

---

## 📚 Why Does the Formula Work?

Imagine writing the sum twice: once forwards, once backwards:
```
S = 1 + 2 + 3 + ... + (n - 1) + n  
S = n + (n - 1) + ... + 2 + 1
```

Now add them together:
```
2S = (1 + n) + (2 + n - 1) + ... + (n + 1)
```

There are `n` terms, and each pair adds up to `(n + 1)`:
```
2S = n * (n + 1)
  S = n * (n + 1) / 2
```

### 🧪 Example:
If `n = 5`:
```
sum = 5 * (5 + 1) / 2 = 30 / 2 = 15
Check: 1 + 2 + 3 + 4 + 5 = 15 ✅
```

---

## 🏁 Which One Should You Use?

| Method     | Time Complexity |
|------------|------------------|
| Loop       | O(n)             |
| Formula    | O(1)             |

For interviews or competitive programming: **always use the formula** unless the problem restricts it.

---
