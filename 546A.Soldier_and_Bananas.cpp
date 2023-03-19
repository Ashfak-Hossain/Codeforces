#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // Code Start From Here

    int k, n, w, b = 0, p = 0;
    cin >> k >> n >> w;

    for (size_t i = 1; i <= w; i++)
        p += k * i;

    if (p > n)
        b = p - n;

    cout << b << endl;

    return 0;
}