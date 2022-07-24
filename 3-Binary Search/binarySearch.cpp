#include <bits/stdc++.h>
using namespace std;

int binarySearch(int *arr, int key)
{
    int n = arr.size();
    int s = 0;
    int e = n - 1;

    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{

    int even[6] = {2, 4, 5, 7, 9, 10};

    int index = binarySearch(even, 7);

    cout << index;

    return 0;
}