// https://cses.fi/problemset/task/1623
#include <bits/stdc++.h>
typedef long long ll;

ll solve(std::vector<int> &arr, size_t i, ll diff)
{
    if (arr.size()==i) return diff;
    i++;
    return std::min(
        std::abs(solve(arr,i,diff+arr[i-1])),
        std::abs(solve(arr,i,diff-arr[i-1])));
}


int main()
{
    int n; std::cin>>n;
    std::vector<int> arr(n);
    for(int i =0; i<n;i++) std::cin >> arr[i];
    std::cout << solve(arr,0, 0) << std::endl;
    return 0;
}