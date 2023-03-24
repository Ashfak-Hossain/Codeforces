#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // Code Start From Here

    set<int> a;

    int x, n = 4;

    while (n--)
    {
        cin >> x;
        a.insert(x);
    }

    cout << 4 - a.size() << endl;

    return 0;
}