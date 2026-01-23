#include <bits/stdc++.h>
using namespace std;

int main(){
    string str = "GeeksforGeeks";
    int N = str.length();

    string::iterator it;
    for (it = str.begin(); it != str.end(); it++) {
        cout << *it << " ";
    }

    return 0;
}
//METHOD 2
#include <bits/stdc++.h>
using namespace std;

int main(){
    string str = "GeeksforGeeks";
    int N = str.length();
   for (auto &ch : str) {
        cout<< ch<< " ";
    }
    return 0;
}