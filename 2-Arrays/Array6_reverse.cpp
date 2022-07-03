#include <bits/stdc++.h>
using namespace std;

void reverseAr(int arr[], int n)
{

    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

void swapAlternative(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[6] = {1, 2, 3, 4, 5, 6};

    printArray(arr, 6);

    swapAlternative(arr, 6);

    printArray(arr, 6);

    reverseAr(arr, 6);

    printArray(arr, 6);

    return 0;
}