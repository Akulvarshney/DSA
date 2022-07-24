#include <bits/stdc++.h>
using namespace std;

int firstOccurance(int *arr, int n, int key)
{
    int s = 0;
    int e = n - 1;

    int mid = s + (e - s) / 2;
    int ans = 0;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastOccurance(int *arr, int n, int key)
{
    int s = 0;
    int e = n - 1;

    int mid = s + (e - s) / 2;
    int ans = 0;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{

    int even[10] = {3, 4, 4, 5, 5, 5, 5, 5, 5, 6};

    int first = firstOccurance(even, 10, 5);
    int last = lastOccurance(even, 10, 5);

    cout << "The first and last occurance indexes are " << first << " " << last << " respectively." << endl;

    cout << "The frequency of a number " << (last - first) + 1;

    return 0;
}