// https://cses.fi/problemset/task/1755
#include <bits/stdc++.h>


int main()
{
    std::string s;
    std::getline(std::cin, s);
    
    std::unordered_map<char, int> m;
    for (char c : s)
        m[c]++;

    char odd_char='\0';
    std::unordered_map<char, int>::iterator it = m.begin();

    std::vector<std::string> result;

    while (it != m.end())
    {
        if (it->second & 1)
        {
            if (odd_char!='\0')
            {
                std::cout << "NO SOLUTION" << std::endl;
                return 0;
            }
            else
            {
                odd_char = it->first;
            }
        }else{
            // lo insertamos al resultado
            result.push_back(std::string(it->second/2, it->first));
        }

        it++;
    }

    for(std::string str : result) std::cout << str;
    if(odd_char!='\0')  std::cout << std::string(m[odd_char], odd_char);
    for(int i =result.size()-1; i>=0; i--) std::cout << result[i];
    std::cout << std::endl;

    return 0;
}