
#include <iostream>
#include <vector>
using namespace std;


// The MyHashMap class implements a simple hash map with basic operations.
class MyHashMap {
private:
    vector<int> arr;
    // Initialize the vector with a size of 1000000 and fill it with -1 to indicate empty slots.
    int empty = -1;

public:
    MyHashMap() : arr(1000000, -1) {} // Constructor initializes the vector with -1.
    // The put method inserts a key-value pair into the hash map.

    void put(int key, int value) { arr[key] = value; }
    // The get method retrieves the value associated with a key, returning -1 if the key does not exist.
    int get(int key) { return arr[key]; }
    // The remove method deletes the key-value pair associated with a key.
    void remove(int key) { arr[key] = -1; }
};

int main() {
    MyHashMap myMap;
    myMap.put(1, 10);
    myMap.put(2, 20);

    cout << "Value at key 1: " << myMap.get(1) << endl; // Output: 10
    cout << "Value at key 2: " << myMap.get(2) << endl; // Output: 20

    myMap.remove(1);
    cout << "Value at key 1 after removal: " << myMap.get(1) << endl; // Output: -1

    return 0;
}