# 🔹 1. Two Sum

## 📌 Problem Statement

Given an array of integers `nums` and an integer `target`, return the indices of the two numbers such that they add up to the target.

* Each input has exactly one solution.
* You cannot use the same element twice.
* Return the answer in any order.

---

## 🧠 Approach (Optimized - Hash Map)

Instead of using a brute force approach (O(n²)), we use a **hash map** to store elements and their indices while iterating.

### 💡 Idea:

For each element `nums[i]`, check if
`target - nums[i]` already exists in the map.

* If yes → we found the answer
* If no → store the element in the map

---

## ⚡ Time & Space Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(n)

---

## 💻 C++ Solution

```cpp
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp; // value -> index
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            
            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }
            
            mp[nums[i]] = i;
        }
        
        return {}; // no solution (though problem guarantees one)
    }
};
```

---

## 🧪 Examples

### Example 1:

Input: `nums = [2,7,11,15], target = 9`
Output: `[0,1]`

### Example 2:

Input: `nums = [3,2,4], target = 6`
Output: `[1,2]`

### Example 3:

Input: `nums = [3,3], target = 6`
Output: `[0,1]`

---

## 🚀 Key Takeaways

* Hash maps reduce time complexity significantly.
* Always think of **complement-based problems** for optimization.
* One-pass solution is optimal here.

---
