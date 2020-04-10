#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    const int n = 15;
    const int m = 2 * n-1;
    int arr[n + 1][m] = { 0 };
    for (int i = 0; i < n; i++)
    {
        arr[i][n - i- 1] = 1;
        arr[i][n + i -1] = 1;
 
    }
    for (int i = 2; i < n; i++)
    {
        for (int j = n - i + 1; j < n-2+i; j = j + 2)
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j + 1];
    }
    int p;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
            cout << "    ";
        p = 1;
        for (int j = n - i - 1; p < i + 2; j = j + 2)
        {
            cout << setw(4) << arr[i][j] << "    ";
            p = p + 1;
        }
        cout << endl;
    }
    return 0;
}