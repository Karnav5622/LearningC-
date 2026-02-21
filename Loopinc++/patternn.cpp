#include<iostream>
using namespace std;
// int main()
// {   
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=0;i<n-1;i++){
//         for(int j=n-1;j>i;j--){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;

// }
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin>>n;
//     int num=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<num;
//             num=num+1;

//         }
//         cout<<endl;

//     }
//     return 0;
// }
int main()
{
    int n;
    cin>>n;
    int ch=65;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<char(ch);
            ch=ch+1;
    }
        ch=65;
        cout<<endl;

    }
    return 0;
}


