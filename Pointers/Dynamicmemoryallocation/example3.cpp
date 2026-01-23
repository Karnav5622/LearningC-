//Example 3: Initializing and Accessing Dynamic Memory
#include <iostream>
using namespace std;

int main() {
    int *ptr = new int[5];
    *(ptr + 2) = 10;       
    cout << *(ptr + 2);     
    return 0;
}