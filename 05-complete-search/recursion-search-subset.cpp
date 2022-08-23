#include <bits/stdc++.h>

void search(int k);

int main()
{
}

void search(int k)
{
    if (k == n)
    {
        // process subset
    }
    else
    {
        search(k + 1);
        subset.push_back(k);
        search(k + 1);
        subset.pop_back();
    }
}
