#include <bits/stdc++.h>
using namespace std;

void reverse(int *arr, int s, int e)
{
    while (s <= e)
    {
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
}

void rotate(int *arr, int n, int k)
{
    k = k % n;

    if (k < 0)
    {
        k += n;
    }

    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
}

void displayArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
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

    int k;
    cout << "Enter the number of rotation = ";
    cin >> k;

    rotate(arr, n, k);

    displayArray(arr, n);

    return 0;
}