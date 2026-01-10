#include<iostream>
using namespace std;
#include <vector>


int main()
{
    vector<int> arr;
    int a,b;
    cout<<"Enter number 1";
    cin>>a;
    cout<<"Enter number 2";
    cin>>b;
    for (int i=1;i<=a;i++){
        if(a%i==0){
            arr.push_back(i);
        }cout<<arr;
    }
    return 0;
}



w