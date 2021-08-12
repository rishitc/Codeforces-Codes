#include <iostream>
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

    int face_count{0};

    int n;
    std::cin >> n;

    std::string polyhedron_name;

    for (int i = 0; i < n; ++i)
    {
        std::cin >> polyhedron_name;

        if (polyhedron_name[0] == 'T')
        {
            face_count += 4;
        }
        else if (polyhedron_name[0] == 'C')
        {
            face_count += 6;
        }
        else if (polyhedron_name[0] == 'O')
        {
            face_count += 8;
        }
        else if (polyhedron_name[0] == 'D')
        {
            face_count += 12;
        }
        else if (polyhedron_name[0] == 'I')
        {
            face_count += 20;
        }
    }
    
    std::cout << face_count << '\n';
    return 0;
}