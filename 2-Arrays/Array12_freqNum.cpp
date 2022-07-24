#include <bits/stdc++.h>
using namespace std;

int freqNum(int *arr, int n, int k)
{
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            counter++;
        }
    }
    return counter;
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
    cin >> k;

    cout << "Frequency of " << k << " in array is " << freqNum(arr, n, k) << endl;
    return 0;
}