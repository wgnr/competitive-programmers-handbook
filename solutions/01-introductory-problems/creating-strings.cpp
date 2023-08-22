// https://cses.fi/problemset/task/1622
#include <bits/stdc++.h>

int main(){ 
    std::string str; std::getline(std::cin, str);
    std::vector<char> perm(str.begin(), str.end());
    std::sort(perm.begin(), perm.end());

    std::set<std::string> s;
    do{
        s.insert(std::string(perm.begin(),perm.end()));
    } while (std::next_permutation(perm.begin(),perm.end()));

    std::cout << s.size() << "\n";
    for(auto e : s) std::cout << e << "\n";
    std::cout << std::endl;
    
    return 0;
}