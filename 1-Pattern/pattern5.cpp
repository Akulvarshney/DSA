// 1
// 23
// 456
// 78910

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i = 1, count = 1;
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}