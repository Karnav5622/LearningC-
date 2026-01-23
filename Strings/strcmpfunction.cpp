#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s1[] = "gfg";
    char s2[] = "abcd";

    int result = strcmp(s1, s2);

    if (result == 0) {
        cout << "Same" << endl;
    } else if (result < 0) {
        cout << "Smaller" << endl;
    } else {
        cout << "Greater" << endl; 
    }

    return 0;
}