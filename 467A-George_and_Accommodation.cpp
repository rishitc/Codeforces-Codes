#include <iostream>

int main()
{
    int n;
    int p, q;
    int count{0};
    const int Space_for_George_and_Alex = 2;

    std::cin >> n;

    while (n--)
    {
        std::cin >> p >> q;

        if (q - p >= Space_for_George_and_Alex)
        {
            ++count;
        }
    }

    std::cout << count << "\n";
}
