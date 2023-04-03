#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n;
    cin >> n;

    int a[101] = {0};

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int m;
    cin >> m;

    int x, y;

    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;

        a[x - 1] += y - 1;
        a[x + 1] += a[x] - y;
        a[x] = 0;
    }

    for (size_t j = 1; j <= n; j++)
    {
        cout << a[j] << endl;
    }

    return 0;
}