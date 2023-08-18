// https://cses.fi/problemset/task/1618
#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n=0;
    std::cin >> n;
    int counter=0;
    while(n>0){
        if(((n%10)*(--n%10))%10==0) counter++;
        std::cout << counter << std::endl;

    }
        std::cout << counter << std::endl;

    return 0;
}