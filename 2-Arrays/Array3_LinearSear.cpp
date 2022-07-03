#include <bits/stdc++.h>
using namespace std;

bool search(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;

    int arr[1000];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "enter the value to search" << endl;
    cin >> key;

    bool found = search(arr, n, key);

    if (found)
    {
        cout << "Key is present";
    }
    else
    {
        cout << "key is not present";
    }
}