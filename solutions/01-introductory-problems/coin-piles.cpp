// https://cses.fi/problemset/task/1754
#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int t; std::cin >> t;
    while(t--){
        ll r,l;
        std::cin >> r >>l;
        if(l>2*r || r>2*l)
            std::cout << "NO" << std::endl;
        else if((r-2*l)%3==0 and (2*r-l)%3==0)
            std::cout << "YES" << std::endl;
        else 
            std::cout << "NO" << std::endl;
    }
    
    return 0;
}