#include <iostream>
using namespace std;
struct Point{
    int x, y;
};

int main(){
    // Struct keyword is not needed here
    Point p = {0, 1};

    // Accessing members
    cout << p.x << " ";
    cout << p.y << endl;

    // Updating members
    p.x = 99;

    // Accessing members again
    cout << p.x << " ";
    cout << p.y;

    return 0;
}