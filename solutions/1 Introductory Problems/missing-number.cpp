// https://cses.fi/problemset/task/1083
#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::cin >> n;

    ll newtom_sum = (ll)n * (n + 1) / 2;

    for (int i = 0; i < n - 1; i++)
    {
        ll v; std::cin >> v;
        newtom_sum -= v;
    }

    std::cout << newtom_sum << std::endl;

    return 0;
}