// https://cses.fi/problemset/task/1071
#include <bits/stdc++.h>
typedef long long ll;

int main() {
  ll t;
  std::cin >> t;
  for (ll i = 0; i < t; i++) {
    ll x,y; std::cin>>y>>x;
    
    if(x>=y){
      if(x%2==1)  std::cout << x*x+1-y;
      else        std::cout << (x-1)*(x-1)+y;
    }else{
      if(y%2==0)  std::cout << y*y+1-x;
      else        std::cout << (y-1)*(y-1)+x;
    }
    

    std::cout << std::endl;
  }

  return 0;
}