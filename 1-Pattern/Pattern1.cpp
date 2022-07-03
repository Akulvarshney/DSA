/*
1234
1234
1234
1234
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "enter the value of n: " << endl;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}