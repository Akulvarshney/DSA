#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {

        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<int> la(n);

        for (int i = 0; i < n; i++)
        {
            cin >> la[i];
        }

        vector<int> po;
        po.resize(26, -1);
        int final = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            if (po[s[i] - 'a'] == -1)
            {
                po[s[i] - 'a'] = i;
            }
            else if (la[po[s[i] - 'a']] < la[i])
            {
                po[s[i] - 'a'] = i;
            }
            final += la[i];
        }

        for (int i = 0; i < 26; ++i)
        {
            if (po[i] != -1)
            {
                final -= la[po[i]];
            }
        }

        cout << final << endl;
    }
    return 0;
}