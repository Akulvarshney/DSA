#include <bits/stdc++.h>
using namespace std;

void findLeaders(int arr[], int n)
{

    int maxi = INT_MIN;

    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
            cout << maxi << " ";
        }
    }
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

    findLeaders(arr, n);
}