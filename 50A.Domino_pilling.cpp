#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // Code Start From Here

    int M, N;
    int domino = 2 * 1;

    cin >> M >> N;

    int rect = M * N;

    cout << rect / domino << endl;

    return 0;
}