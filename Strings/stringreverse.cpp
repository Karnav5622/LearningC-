// User function Template for C++
#include <string>
using namespace std;

// complete the function
// the function should return the reversed string
string reverseString(string &s) {
    // code here
    string str;
    for(int i=s.length()-1;i>=0;i--){
        str=str+s[i];
    }
    return str;
}

string reverseString2(string &s) {
    // code here
    string str;
    int n=s.length();
    for(int i=0;i<s.length();i++){
        str=str+s[n-i-1];
    }
    return str;
}
string reverseString3(string &s) {
    // code here
    int n;
    n=s.length();
    for(int i=0;i<s.length()/2;i++){
        swap(s[n-i-1],s[i]);
    }
    return s;
}
int main(){
    string s="hello";
    string rev=reverseString(s);
    string rev2=reverseString2(s);
    string rev3=reverseString3(s);
    return 0;

}