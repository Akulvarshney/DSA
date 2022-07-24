#include <bits/stdc++.h>
using namespace std;

int tlsks(vector<int> ar, int k)
{
    sort(ar.begin(), ar.end());
    int n = ar.size();
    int sum = 0;
    for (int i = n - 1; i > n - k - 1; i--)
    {
        sum = sum + ar[i];
    }

    return sum;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr;
    int a;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        arr.push_back(a);
    }

    int k;
    cin >> k;

    cout << tlsks(arr, k);
    return 0;
}