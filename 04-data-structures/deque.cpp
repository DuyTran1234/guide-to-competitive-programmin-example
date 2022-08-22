#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> test_deque;
    test_deque.push_back(5);  // 5
    test_deque.push_back(3);  // 5, 3
    test_deque.pop_back();    // 5
    test_deque.push_front(4); // 4, 5
    test_deque.pop_front();   // 5
}