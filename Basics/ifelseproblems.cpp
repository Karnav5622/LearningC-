#include<iostream>
using namespace std;
//Program to check odd or even
// int main(){
//     int a;
//     cout<<"Enter no"<<endl;
//     cin>>a;
//     if (a%2==0){
//         cout<<"Even";
//     }
//     else{
//         cout<<"Odd"<<endl;
//     }
    
//     return 0;
// }
int main(){
    int a,b,c;
    cout<<"ENTER 3 NUMBERS"<<endl;
    cin>>a>>b>>c;
    if (a>b&&a>c)
    {
        cout<<"a is largest";
    }
    else if(b>a&&b>c){
        cout<<"b is largest";
    }
    else if(c>a&&c>b){
        cout<<"c is largest";
    }
    else if(a==b&&b==c){
        cout<<"All are equal";
    }

}