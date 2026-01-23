//Example 2: Accessing Uninitialized Memory
#include <iostream>
using namespace std;

int main() {
    int *ptr = new int[5];
    cout << *(ptr + 2);  // Access the third element in the array
    return 0;
}