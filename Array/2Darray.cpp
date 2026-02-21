#include <iostream>
using namespace std;

int main()
{
    int arr[3][2] = {{10, 20}, {30, 40}, {50, 60}}; // 3 rows, 2 columns

    for (int i = 0; i < 3; i++) // Loop through rows
    {
        for (int j = 0; j < 2; j++) // Loop through columns
        {
            cout << arr[i][j] << " ";
        }
    }

    return 0;
}