#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string source;
    std::string target;

    std::cin >> source;
    std::cin >> target;

    std::reverse(std::begin(source), std::end(source));

    if(source == target)
        std::cout << "YES\n";
    else
        std::cout << "NO\n";

    return 0;
}