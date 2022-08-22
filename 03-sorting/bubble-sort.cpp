#include <bits/stdc++.h>

void swap(int *a, int *b);
void display(int array[], int length);

struct P
{
    int x, y;
    bool operator<(const P &p)
    {
        if (x != p.x)
            return x < p.x;
        else
            return y < p.y;
    }
};


int main()
{
    // std::vector<int> v = {4, 2, 5, 3, 5, 8, 3};
    // std::sort(v.begin(), v.end());
    // sort(v.rbegin(), v.rend());

    // int n = 7; // array size
    // int a[] = {4, 2, 5, 3, 5, 8, 3};
    // sort(a, a + n);

    // string s = "monkey";
    // sort(s.begin(), s.end());
    // vector<pair<int, int>> v;
    // v.push_back({1, 5});
    // v.push_back({2, 3});
    // v.push_back({1, 2});
    // sort(v.begin(), v.end());

    int n = 5;
    int array[n] = {4, 3, 2, 1, 0};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(&array[j], &array[j + 1]);
            }
        }
    }

    display(array, n);
}

void swap(int *a, int *b)
{
    int swap = *a;
    *a = *b;
    *b = swap;
}
void display(int array[], int length)
{
    for (int i = 0; i < length; ++i)
    {
        std::cout << array[i] << "\n";
    }
}
