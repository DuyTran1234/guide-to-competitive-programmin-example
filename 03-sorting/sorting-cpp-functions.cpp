#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    int array[n] = {0, 1, 2, 3, 5};
    int x = 4;
    // auto k = lower_bound(array, array + n, x) - array;
    // if (k < n && array[k] == x)
    // {
    //     // x found at index k
    // }
    // auto a = lower_bound(array, array + n, x);
    // auto b = upper_bound(array, array + n, x);
    // cout << b - a << "\n";
    auto r = equal_range(array, array + n, x);
    cout << r.second - r.first << "\n";

    // cout << k << endl;
}
