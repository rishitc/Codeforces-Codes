#include <iostream>
#include <string>

inline void mark(const std::string_view name,
                 char alphabet_frequency_count[],
                 short &unique_alphabet_occurrence_count)
{
    for (const char &ch : name)
    {
        const int index{ch - 'A'};
        if (alphabet_frequency_count[index] == 0)
        {
            ++unique_alphabet_occurrence_count;
        }
        ++alphabet_frequency_count[index];
    }
}

inline std::string unmark(const std::string_view name,
                          char alphabet_frequency_count[],
                          short &unique_alphabet_occurrence_count)
{
    for (const char &ch : name)
    {
        const int index{ch - 'A'};
        if (alphabet_frequency_count[index] == 0)
        {
            return "NO";
        }
        else if (alphabet_frequency_count[index] == 1)
        {
            --unique_alphabet_occurrence_count;
        }
        --alphabet_frequency_count[index];
    }
    return unique_alphabet_occurrence_count == 0 ? "YES" : "NO";
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

    char alphabet_frequency_count[26]{};
    short unique_alphabet_occurrence_count{0};

    std::string guest_name;
    std::string host_name;
    std::string letters_in_pile;

    std::cin >> guest_name >> host_name >> letters_in_pile;

    mark(guest_name, alphabet_frequency_count, unique_alphabet_occurrence_count);
    mark(host_name, alphabet_frequency_count, unique_alphabet_occurrence_count);
    std::string result {unmark(letters_in_pile, alphabet_frequency_count, unique_alphabet_occurrence_count)};

    std::cout << result << "\n";

    return 0;
}