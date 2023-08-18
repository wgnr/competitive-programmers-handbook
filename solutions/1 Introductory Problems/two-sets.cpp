// https://cses.fi/problemset/task/1092
#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::cin >> n;

    if (n < 3)
    {
        std::cout << "NO" << std::endl;
        return 0;
    }

    std::vector<int> s1;
    std::vector<int> s2;

    s1.push_back(n--);

    bool sw = false;

    while (n > 0)
    {
        for (int i = n; i - 2 < n && n > 0; n--)
        {
            if (sw)
                s1.push_back(n);
            else
                s2.push_back(n);
        }

        sw = !sw;
    }

    if (std::accumulate(s1.begin(), s1.end(), 0) != std::accumulate(s2.begin(), s2.end(), 0))
    {
        std::cout << "NO" << std::endl;
        return 0;
    }

    std::cout << "YES" << std::endl;

    for (auto arr : {s1, s2})
    {
        std::cout << arr.size() << std::endl;
        for (int i = 0; i < (int)arr.size(); i++)
            std::cout << arr.at(i) << " ";
        std::cout << std::endl;
    }

    return 0;
}