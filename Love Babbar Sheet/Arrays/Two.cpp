#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[10000];
    int b[10000];
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    set<int> st;

    for (int i = 0; i < n; i++)
    {
        st.emplace(a[i]);
    }

    for (int i = 0; i < m; i++)
    {
        st.emplace(b[i]);
    }

    for (auto it = st.begin(); it != st.end(); it++)
    {
        cout << *(it) << " ";
    }

    return 0;
}