#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // Code Start From Here

    long long n, a;
    cin >> n;
    if (n % 2 == 0)
        a = n / 2;
    else
        a = ((n + 1) / 2) * (-1);
    cout << a << endl;

    return 0;
}