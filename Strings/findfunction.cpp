#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "geeksforgeeks";

    int res = str.find("eek");
    if (res == string::npos)
        cout << "Not Present\n";
    else
        cout << "First occurrence at index " << res << "\n";

    //SubString Not found
    str = "geeksforgeeks";
    res = str.find("xyz");
    if (res == string::npos)
        cout << "Not Present\n";
    else
        cout << "First occurrence at index " << res << "\n";

    return 0;
}