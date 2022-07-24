#include <bits/stdc++.h>
using namespace std;

// int neighbor(int *arr)
// {
//     int n = sizeof(arr);
//     int count = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 1 && arr[i + 1] == 1)
//         {
//             continue;
//         }
//         else
//         {
//             count++;
//         }
//     }
//     return count;
// }

void generate(int ones, int zeroes, string str, int len)
{
    vector<int> string;
    if (len == str.length())
    {
        string.push_back(str);
        return string;
    }
    generate(ones + 1, zeroes, str + "1", len);

    if (ones > zeroes)
    {
        generate(ones, zeroes + 1, str + "0", len);
    }
}

int main()
{
    // int arr[10000];

    string str = "";
    int ans = generate(0, 0, str, 3);
    cout << ans;

    // int ans = neighbor(arr);
    // cout << ans;

    return 0;
}