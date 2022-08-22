#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;
    s.push(5); // 5
    s.push(3); // 3, 5
    s.push(2); // 2, 3, 5
    s.pop();   // 3, 5
}