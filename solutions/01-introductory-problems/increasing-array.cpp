// https://cses.fi/problemset/task/1094
#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n; std::cin>>n;
    int top=-1e9;
    ll counter=0;
    for(int i=0;i<n;i++){
        int val;std::cin>>val;
        top=std::max(top, val);
        if(val<top)
            counter+=(ll)top-val;
    }

    std::cout<<counter<<std::endl;

    return 0;
}