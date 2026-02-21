#include <iostream>
using namespace std;

int main()
{
    int m = 3, n = 2;
    int **arr = new int *[m]; // Allocate memory for row pointers

    for (int i = 0; i < m; i++)
        arr[i] = new int[n]; // Allocate memory for each row

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            arr[i][j] = 10; 

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << " ";

    return 0;
}