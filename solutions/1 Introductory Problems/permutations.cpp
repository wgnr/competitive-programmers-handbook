// https://cses.fi/problemset/task/1070
#include <bits/stdc++.h>

int main()
{
    int n; std::cin>>n;
    if (n==2 || n==3){
        std::cout << "NO SOLUTION" << std::endl;
        return 0;
    }

    for(int i=n/2+1;i<=n;i++){
        std::cout<<i<< " ";
        
        int v = i-n/2;
        if(v<=n/2)
            std::cout<<v<< " ";
    }

    return 0;
}