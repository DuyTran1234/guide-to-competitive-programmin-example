#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    q.push(5); // 5
    q.push(4); // 5, 4
    q.push(2); // 5, 4, 2
    q.pop();   // 4, 2
    q.front(); // 4
}