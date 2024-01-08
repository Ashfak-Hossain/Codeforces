#include <bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int x;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sum += (x & 1);
    }
    if (sum)
        cout << "First\n";
    else
        cout << "Second\n";

    return 0;
}