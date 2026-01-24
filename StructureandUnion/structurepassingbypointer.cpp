#include <iostream>
using namespace std;

struct Student {
    int roll;
    string name;
    string address;
};

void print(const Student *s) {
    cout << s->roll << " "
         << s->name << " "
         << s->address << endl;
}

int main() {
    Student s = {101, "Bob", "Narnia"};
    print(&s); // Pass by pointer
    return 0;
}