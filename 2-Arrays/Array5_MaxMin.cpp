#include <bits/stdc++.h>
using namespace std;

int minNum(int arr[], int n)
{

    int mini = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        mini = min(mini, arr[i]);
    }

    return mini;
}

int maxNum(int arr[], int n)
{
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
    }

    return maxi;
}

int main()
{

    int arr[1000];

    int size;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Minimum = " << minNum(arr, size) << endl;
    cout << "Maximum = " << maxNum(arr, size) << endl;
    return 0;
}