#include <iostream>


int main()
{
    int16_t a = 0, b = 0;
    int64_t num_year = 0;

    std::cin >> a >> b;

    while(a <= b) {
        a = a * 3;
        b = b * 2;
        num_year++;
    }

    std::cout << num_year << std::endl;;
}
