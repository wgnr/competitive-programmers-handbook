// https://cses.fi/problemset/task/1068
#include <bits/stdc++.h>
typedef long long ll;

ll solve(ll n)
{
    if (n % 2 == 0)
        return n / 2;
    return n * 3 + 1;
}

int main()
{
    ll n;
    std::cin >> n;

    while (n != 1)
    {
        std::cout << n << " ";
        n = solve(n);
    }
    std::cout << n << std::endl;

    return 0;
}