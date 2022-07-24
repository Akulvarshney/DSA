#include <bits/stdc++.h>
using namespace std;

int maxNum(int *arr, int n)
{
    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int minNum(int *arr, int n)
{
    int mini = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        mini = min(arr[i], mini);
    }
    return mini;
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

    cout << "Highest difference in the array is = " << maxNum(arr, n) - minNum(arr, n) << endl;
    return 0;
}