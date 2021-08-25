#include <iostream>
#include <unordered_map>
#include <string>

int main()
{
    constexpr int Debugging = false;
    if constexpr (not Debugging)
    {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
        std::cout.tie(NULL);
    }

    int n;
    std::cin >> n;

    std::unordered_map<std::string, int> name_freq_map;
    std::string name;
    while (n--)
    {
        std::cin >> name;

        if (name_freq_map.find(name) == name_freq_map.end())
        {
            name_freq_map[name] = 1;
            std::cout << "OK\n";
        }
        else
        {
            std::cout << name << name_freq_map[name] << '\n';
            ++name_freq_map[name];
        }
    }

    return 0;
}