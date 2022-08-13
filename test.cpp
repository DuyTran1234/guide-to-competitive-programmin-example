#include <bits/stdc++.h>

#define F first
#define S second
#define PB push_back
#define MP make_pair

using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n = 8;
    int array[n] = {-1, 2, 4, -3, 5, 2, -5, 2};
    int best = 0;
    for (int a = 0; a < n; a++)
    {
        int sum = 0;
        for (int b = a; b < n; b++)
        {
            sum += array[b];
            best = max(best, sum);
        }
    }
    cout << best << "\n";
}
