# Simple Array-Based Map (MyHashMap)

This repository contains a basic C++ implementation of a key-value store named `MyHashMap`.

**Disclaimer:** This implementation is a **Direct-Address Table**, not a true hash map. It uses the integer key directly as an index in an array. It is intended as a simple example and has significant limitations.



---

## 🧐 How It Works

The `MyHashMap` class uses a `std::vector<int>` as its underlying data structure. The core idea is to map each key to a specific index in the vector.

- `put(key, value)`: Stores the `value` at the index equal to the `key`.**Time Complexity:** O(1)
-   `get(key)`: Retrieves the value from the index equal to the `key`.**Time Complexity:** O(1)
-   `remove(key)`: Resets the value at the index `key` to a default "empty" value (`-1`).**Time Complexity:** O(1)


---

## 🚨 Critical Issues & Limitations

This implementation has several critical flaws that make it unsafe and impractical for real-world use.

1.  **💥 Major Bug: No Memory Allocation**
    The constructor `MyHashMap()` does not allocate any memory for the `arr` vector. Any call to `put`, `get`, or `remove` will cause a **segmentation fault** because it tries to access an out-of-bounds memory location.

2.  **🧠 Inefficient Memory Usage**
    Because the key is used as the array index, storing a key like `1,000,000` would require the vector to have a size of at least `1,000,001`, even if it's the only key stored. This is extremely memory-inefficient for large or sparse keys.

3.  **Not a Real Hash Map**
    A true hash map uses a **hash function** to convert keys into indices and a **collision resolution strategy** (like chaining) to handle when different keys map to the same index. This code lacks both.

---


### 2. Implement a True Hash Map

To build a functional hash map, you need to introduce hashing and collision resolution. A common approach is **chaining**, where each array index stores a linked list of key-value pairs.

-   **Data Structure:** Use `vector<list<pair<int, int>>>` instead of `vector<int>`.
-   **Hash Function:** Create a function to map keys to indices (e.g., `int index = key % array_size;`).
-   **Logic:**
    -   **`put(key, value)`**: Hash the key to find the index. Search the list at that index for the key. If found, update the value. If not, add a new `pair(key, value)` to the list.
    -   **`get(key)`**: Hash the key to find the index. Search the list for the key and return its corresponding value.
    -   **`remove(key)`**: Hash the key to find the index. Search the list and remove the element with that key.

    **This we will be doing after our linked list questions.**

    ---