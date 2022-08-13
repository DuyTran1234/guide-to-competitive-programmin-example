#include <bits/stdc++.h>

using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n = 8;
    int array[n] = {-1, 2, 4, -3, 5, 2, -5, 2};
    // int n = 5;
    // int array[n] = {0, 1, 2, 3, 4};
    int best = 0;
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum = max(array[i], sum + array[i]);
        best = max(best, sum);
        cout << "sum = " << sum << "\t"
             << "best = " << best << endl;
    }

    cout << best << "\n";
}