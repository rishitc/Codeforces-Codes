#include <iostream>
#include <cstdio>
#include <cctype>

int main()
{
    /*
    dominantCase can have 1 of 3 values:
    > 0  -> More uppercase letters than lowercase letters
    0    -> Equal number of uppercase and lower case letters
    < 0  -> More lowercase letters than uppercase letter
    */
    int dominantCase = 0;
    char text[101], letter;
    int i_ind{0}, o_ind{0};

    while ((letter = std::getchar()) != '\n')
    {
        text[i_ind] = letter;
        if (std::isupper(text[i_ind]))
        {
            ++dominantCase;
        }
        else
        {
            --dominantCase;
        }

        ++i_ind;
    }
    text[i_ind] = '\0';

    if (dominantCase > 0)
    {
        while (text[o_ind])
        {
            std::putchar(std::toupper(text[o_ind]));
            ++o_ind;
        }
    }
    else
    {
        while (text[o_ind])
        {
            std::putchar(std::tolower(text[o_ind]));
            ++o_ind;
        }
    }

    std::putchar('\n');

    return 0;
}