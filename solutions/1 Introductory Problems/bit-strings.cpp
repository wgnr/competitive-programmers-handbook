// https://cses.fi/problemset/task/1617
#include <bits/stdc++.h>
typedef long long ll;
const int f = 1e9 + 7;

int main()
{
    ll exp; std::cin >> exp;
    ll base = 2;
    ll result = 1;

    while(exp>0){
        if(exp & 1)
            result = (result*base)%f;
        base = (base * base) % f;
        exp >>=1;
    }

    std::cout << result << std::endl;
    return 0;
}