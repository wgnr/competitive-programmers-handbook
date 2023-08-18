// https://cses.fi/problemset/task/1072
#include <bits/stdc++.h>
#include <map>
typedef long long ll;

std::set<std::pair<int, int>> pairs;

bool check(int i, int &n){
    return i >=0 and i<=n;
}

int valid_move(int &x, int &y, int &n){
    int counter=0;
    if (check(x+1,n) and check(y+2,n)) counter++;
    if (check(x-1,n) and check(y+2,n)) counter++;
    if (check(x+2,n) and check(y+1,n)) counter++;
    if (check(x+2,n) and check(y-1,n)) counter++;
    
    if (check(x-2,n) and check(y+1,n)) counter++;
    if (check(x-2,n) and check(y-1,n)) counter++;
    if (check(x+1,n) and check(y-2,n)) counter++;
    if (check(x-1,n) and check(y-2,n)) counter++;
    return counter;
}

ll combination(ll n){
    return n*(n-1)/2;
}


int main() {
    ll n; std::cin >> n;

    for(ll i = 1; i<=n; i++){
        pairs.clear();
        ll total = combination(i*i);
        for()
        std::cout << total << std::endl;
    }
  
  return 0;
}