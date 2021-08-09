#include <array>
#include <iostream>


int main()
{
    int16_t n = 0, h = 0;
    std::cin >> n >> h;

    std::array<int16_t, 1000> friends;
    int16_t width = 0;

    for(int16_t i = 0; i < n; i++)
    {
        std::cin >> friends[i];
    }
    for(int16_t i = 0; i < n; i++)
    {
        if(friends[i] > h)
        {
            width += 2;
            continue;
        }
        width++;
    }

    std::cout << width << std::endl;
}
