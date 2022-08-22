#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;
typedef tree<int, null_type, std::less<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    indexed_set;

int main()
{
    indexed_set s;
    s.insert(2);
    s.insert(2);
    s.insert(7);
    s.insert(3);
    s.insert(9);

    auto x = s.find_by_order(0);
    std::cout << *x << "\n"; // 2

    auto y = s.find_by_order(1);
    std::cout << *y << "\n"; // 3

    std::cout << s.order_of_key(7) << "\n"; // index "2"

    std::cout << s.order_of_key(6) << "\n"; // 2
    std::cout << s.order_of_key(8) << "\n"; // 3
}