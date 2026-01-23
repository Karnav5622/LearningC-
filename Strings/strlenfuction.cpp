#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s1[] = "gfg";
    char s2[] = {'C', 'P', 'P', '\0'};

    cout << strlen(s1) << endl; 
    cout << strlen(s2) << endl; 
    return 0;
}