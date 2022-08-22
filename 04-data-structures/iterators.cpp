#include <bits/stdc++.h>
using namespace std;

int main()
{

    // vector<int> v = {3, 4, 5, 1, 7};
    // sort(&v[0], &v[5]);
    // // reverse(v.begin(), v.end());
    // // random_shuffle(v.begin(), v.end());

    // for (auto item : v)
    // {
    //     cout << item << "\n";
    // }

    set<int> s = {5, 4, 3, 3, 2, 0, 0, 0};
    int x = 3;
    // set<int>::iterator it = s.begin();
    // for (auto item : s)
    // {
    //     cout << item << "\n";
    // }
    // cout << *it << "\n";

    // cout << "Another way"
    //      << "\n";
    // for (set<int>::iterator i = s.begin(); i != s.end(); ++i)
    // {
    //     cout << *i << "\n";
    // }

    // // find a element in a set
    // auto f = s.find(4);
    // cout << *f << endl;

    auto lb = s.lower_bound(x);
    if (lb == s.begin())
    {
        cout << *lb << "\n";
    }
    else if (lb == s.end())
    {
        auto p_result = --lb;
        cout << *p_result << "\n";
    }
    else
    {
        int a = *lb;
        lb--;
        int b = *lb;
        if (abs(x - a) < abs(x - b))
            cout << a << "\n";
        else
            cout << b << "\n";
    }
}
