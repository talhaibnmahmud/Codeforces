#include <iostream>

int main()
{
    int test_case;
    std::cin >> test_case;

    for(int i = 0; i < test_case; i++) {
        int n, x, a, b;
        std::cin >> n >> x >> a >> b;

        if(a > b)
            std::swap(a, b);

        while(x && (a > 1)) {
            a--;
            x--;
        }
        while(x && (b < n)) {
            b++;
            x--;
        }

        std::cout << abs(b - a) << std::endl;
    }
}
