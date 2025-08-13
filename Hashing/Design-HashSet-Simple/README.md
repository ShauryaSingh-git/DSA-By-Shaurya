# Simple HashSet Implementation in C++ Problem 705

**Our score-** Easy

This repository contains a basic C++ implementation of a HashSet data structure. It's designed to handle integer keys and is built upon a `std::vector` acting as a direct-address table. This implementation prioritizes simplicity and speed for its specific use case, offering constant-time complexity for its core operations.

---

## ⚙️ How It Works

The core concept behind this `MyHashSet` is a **direct-address table**. We use a large boolean-like array (a `std::vector<int>`) where the index of the array directly corresponds to the integer key.

-   A `vector<int>` named `answer` of size 1,000,001 is initialized. This pre-allocates space for all possible keys from 0 to 1,000,000.
-   An initial value of `-1` at `answer[key]` signifies that the `key` is **not** present in the set.
-   When a key is added, its corresponding index in the vector is set to `1`, marking it as **present**.
-   This direct mapping allows for adding, removing, or checking for a key's existence to be as fast as a single array access.



---

## 📖 API Reference

The `MyHashSet` class provides three main methods to interact with the set.

### `MyHashSet()`

The constructor initializes the hash set. It resizes the internal vector to `1,000,001` and sets all initial values to `-1`.

- **Time Complexity:** O(N), where N = 1,000,001 (for initialization)

### `void add(int key)`

This method adds an integer `key` to the set.
-   **Logic**: It checks if `answer[key]` is `-1`. If it is, the value is updated to `1`. If the key is already present, the set remains unchanged.
-   **Parameters**: `int key` - The integer to add. The key must be in the range `[0, 1000000]`.
-   **Time Complexity:** O(1)

### `void remove(int key)`

This method removes an integer `key` from the set.
-   **Logic**: It checks if `answer[key]` is `1`. If it is, the value is updated to `-1`. If the key doesn't exist, nothing happens.
-   **Parameters**: `int key` - The integer to remove.
-   **Time Complexity:** O(1)

### `bool contains(int key)`

This method checks if a `key` is present in the set.
-   **Logic**: It returns `true` if `answer[key]` is `1`, and `false` otherwise.
-   **Parameters**: `int key` - The integer to check for.
-   **Returns**: `bool`
-   **Time Complexity:** O(1)

---


## 📊 Complexity Analysis

-   ### Time Complexity
    All operations are performed in constant time because they involve a single, direct array access.
    -   `add(key)`: $O(1)$
    -   `remove(key)`: $O(1)$
    -   `contains(key)`: $O(1)$

-   ### Space Complexity
    The space complexity is determined by the maximum possible value of the key, not the number of items stored.
    -   $O(N)$, where $N = 1,000,001$. The vector is always this size, regardless of whether you store one element or thousands.

---

## ⚠️ Limitations

1.  **High Memory Consumption**: This implementation is very memory-inefficient. It allocates an array for one million integers, which consumes approximately **4 MB** of memory (`1,000,001 * 4 bytes`), even if the set is empty.
2.  **Limited Key Domain**: It can only store non-negative integers.
3.  **Fixed Key Range**: The keys are restricted to the range `[0, 1000000]`. Any key outside this range will result in out-of-bounds access and undefined behavior.

This implementation is ideal for educational purposes or for scenarios where the range of keys is small and fixed, and performance is critical. For general-purpose use, C++'s built-in `unordered_set` is a much better choice, as it handles hashing, collisions, and memory management more effectively.

**This is a simple version , we will create a true hashset after we complete linked list**

---