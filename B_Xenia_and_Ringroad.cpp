
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    long long int nodes[m];
    long long int totalsteps = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> nodes[i];
    }
    long long int prev = 1;
    for (int i = 0; i < m; i++)
    {
        if (nodes[i] < prev)
        {
            totalsteps += ((n - prev) + nodes[i]);
        }
        else
        {
            totalsteps += (nodes[i] - prev);
        }
        prev = nodes[i];
    }
    cout << totalsteps << endl;
    return 0;
}