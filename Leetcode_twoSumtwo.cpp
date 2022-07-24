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

vector<int> twoSumtwo(int *arr, int k)
{
    int n = arr.size();
    vector<int> ans;
    for (int i = 0; i < n - 1; i++)
    {
        int temp = binarySearch(arr, k - arr[i]);
        if (temp != -1)
        {
            ans.push_back(i + 1);
            ans.push_back(temp + 1);
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        ans[i] = ans[i] + 1;
    }

    return ans;
}

int main()
{

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    vector<int> ans;
    ans = twoSumtwo(arr, k);

    cout << ans;

    return 0;
}