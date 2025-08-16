# Insertion Sort in C++
this is the problem given on coding ninjas.

[View the problem on Coding Ninjas](https://www.codingninjas.com/studio/problems/insertion-sort_624381)

---

## 📝 Description

Insertion sort is a simple and intuitive comparison-based sorting algorithm. It works by building a sorted array one element at a time. The algorithm iterates through the input elements and, for each element, it finds its correct position in the already sorted part of the array and inserts it there. This process is repeated until all input elements have been moved to their correct sorted positions.

- **In-place:** Requires a constant amount of additional memory space.
- **Stable:** Does not change the relative order of equal elements.


---

## 🧠 How It Works

The algorithm divides the array into two parts: a sorted subarray and an unsorted subarray.

1. **Initialization:** The first element `arr[0]` is considered the initial sorted subarray.
2. **Iteration:** The outer loop starts from the second element (`i = 1`) and goes up to the last element.
3. **Select Key:** In each iteration, the current element `arr[i]` is selected as the key.
4. **Comparison and Shifting:** The while loop compares the key with the elements in the sorted subarray (from `arr[i-1]` down to `arr[0]`). If an element in the sorted part is greater than the key, it is shifted one position to the right to make space.
5. **Insertion:** This shifting continues until an element smaller than or equal to the key is found, or the beginning of the array is reached. The key is then inserted into the correct position.
6. **Termination:** The process repeats until the entire array is sorted.

---

## 📊 Complexity Analysis

- **Time Complexity:**
  - **Best Case:** O(n) – when the array is already sorted.
  - **Average Case:** O(n²) – when the elements are in random order.
  - **Worst Case:** O(n²) – when the array is sorted in reverse order.

- **Space Complexity:**  
  O(1) – It's an in-place sorting algorithm, as it only requires a constant amount of extra memory for variables like `key` and `j`.

---

## ▶️ How to Use

To use this function, simply include it in your C++ program and call it with the vector you wish to sort.

```cpp
#include <iostream>
#include <vector>

// ... (paste the insertionSort function here) ...

int main() {
    std::vector<int> my_numbers = {12, 11, 13, 5, 6};
    
    std::cout << "Unsorted array: ";
    for (int num : my_numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    insertionSort(my_numbers.size(), my_numbers);

    std::cout << "Sorted array:   ";
    for (int num : my_numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
```

**Expected Output:**
```
Unsorted array: 12 11 13 5 6 
Sorted array:   5 6 11 12
```