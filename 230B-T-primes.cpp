#include <iostream>
#include <unordered_set>

inline void t_prime_finder(std::unordered_set<long long int> &t_primes)
{
    t_primes.insert(4);
    bool sieve[static_cast<long long int>(1e6 + 1)]{};
    for (long long int num = 3; num < static_cast<long long int>(1e6 + 1); num += 2)
    {
        if (sieve[num] == false)
        {
            t_primes.insert(num * num);
            for (long long int j = num; j < static_cast<long long int>(1e6 + 1); j += num)
            {
                sieve[j] = true;
            }
        }
    }
}

int main()
{
    constexpr int Debugging = false;
    if constexpr (not Debugging)
    {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
        std::cout.tie(NULL);
    }

    std::unordered_set<long long int> t_primes;
    t_prime_finder(t_primes);

    int n;
    std::cin >> n;

    long long int num;
    while (n--)
    {
        std::cin >> num;
        if (t_primes.find(num) != t_primes.end())
        {
            std::cout << "YES" << std::endl;
        }
        else
        {
            std::cout << "NO" << std::endl;
        }
    }

    return 0;
}