// https://cses.fi/problemset/task/1069
#include <bits/stdc++.h>

int main()
{

    int longest_counter = 1;

    std::string str;
    std::cin >> str;

    int current_counter = 1;
    char current_char = str[0];

    for (int i = 1; i < (int)str.size(); i++)
    {
        char c = str[i];

        if (current_char != c)
        {
            current_counter = 0;
            current_char = c;
        }

        current_counter++;

        if (longest_counter < current_counter)
            longest_counter = current_counter;
    }

    std::cout << longest_counter << std::endl;

    return 0;
}