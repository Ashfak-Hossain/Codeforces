/**
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 30/06/2023 15:08:08
 **/
#include <bits/stdc++.h>

#define rep1(i, L, R) for (int i = L; i <= R; i++)

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n;

    cin >> n;

    rep1(i, 1, 12) cout << n << " * " << i << " = " << n * i << endl;

    return 0;
}