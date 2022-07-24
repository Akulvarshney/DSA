#include <bits/stdc++.h>
using namespace std;

bool checkSorted(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[100];
    int n;
    cout << "Enter the size of array = ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << checkSorted(arr, n);
}