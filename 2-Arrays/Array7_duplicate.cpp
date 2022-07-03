#include <bits/stdc++.h>
using namespace std;

int duplicateNum(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                return arr[j];
            }
        }
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 5, 2};

    cout << duplicateNum(arr, 5) << endl;
}