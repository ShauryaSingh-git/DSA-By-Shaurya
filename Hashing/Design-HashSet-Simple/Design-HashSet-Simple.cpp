#include <iostream>
#include <vector>
using namespace std;    

class MyHashSet {
private:
    // Using a vector to store the presence of keys.
    vector<int> answer;

public:
    // Constructor initializes the vector with a size of 1000001 and fills it with -1 to indicate empty slots.
    MyHashSet() { answer.resize(1000001, -1); }

    void add(int key) {
        // If the key is not already present, set it to 1.
        if (answer[key] == -1) {
            answer[key] = 1;
        }
    }
    // If the key is already present, do nothing.
    void remove(int key) {
        if (answer[key] == 1) {
            answer[key] = -1;
        }
    }
    // Check if the key is present in the set.
    bool contains(int key) {
        if (answer[key] == 1) {
            return true;
        }
        
        return false;
    }
};
 
int main() {
    MyHashSet mySet;
    mySet.add(5);
    mySet.add(10);

    cout << "Contains 5? " << (mySet.contains(5) ? "Yes" : "No") << endl;   // Yes
    cout << "Contains 10? " << (mySet.contains(10) ? "Yes" : "No") << endl; // Yes
    cout << "Contains 3? " << (mySet.contains(3) ? "Yes" : "No") << endl;   // No

    mySet.remove(5);
    cout << "Contains 5 after removal? " << (mySet.contains(5) ? "Yes" : "No") << endl; // No

    return 0;
}