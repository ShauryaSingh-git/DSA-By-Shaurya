# Simplify Unix-Style File Path in C++ Problem No-71


+ Difficulty-Medium

+ [Click Here To Check- Problem:71](https://leetcode.com/problems/simplify-path/description/)

This repository contains a C++ solution for simplifying a given absolute Unix-style file path. The code converts a path with special directory commands like `.` (current directory) and `..` (parent directory) into its canonical, simplified form.

## 📜 Problem Statement
--------------------

Given a string `path`, which is an absolute path (starting with a '/') to a file or directory in a Unix-style file system, convert it to the simplified canonical path.

The canonical path should have the following properties:

-   It must start with a single slash `/`.

-   Any two directories are separated by a single slash `/`.

-   It must not end with a trailing `/` (unless it's the root directory).

-   It must not contain `.` (current directory) or `..` (parent directory).

For example, given the path `/a/./b/../../c/`, the simplified path would be `/c`.

## ⚙️ Algorithm Explained
----------------------

The solution utilizes a **stack** to efficiently handle the directory navigation logic. Here's a breakdown of the approach:

1.  **Tokenization**: The input `path` string is split by the `/` delimiter using a `stringstream`. This breaks the path into its individual components (directory names, `.` or `..`).

2.  **Processing Components**: Each component is processed according to these rules:

    -   If the component is `..`, it signifies moving up to the parent directory. We handle this by popping the top element from the stack, but only if the stack is not empty.

    -   If the component is `.` or an empty string (resulting from multiple slashes like `//`), it is ignored.

    -   Any other component is treated as a valid directory name and is pushed onto the stack.

3.  **Path Reconstruction**: After processing all components, the stack contains the sequence of directories in the correct, simplified order.

    -   The final path is built by popping elements from the stack one by one and prepending them to the result string, each preceded by a `/`.

    -   If the stack is empty at the end (e.g., path was `/../`), the result is simply `/`, representing the root directory.



✨ Example
---------

The `main` function in the provided code demonstrates the usage with an example:

-   **Input Path**: `/a/./b/../../c/`

-   **Expected Output**: `/c`

When you run the program, it will print the simplified path to the console.

---