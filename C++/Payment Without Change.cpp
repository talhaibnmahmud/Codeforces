#include <iostream>

int main()
{
    int query;
    std::cin >> query;

    for(int i = 0; i < query; i++) {
        int64_t a, b, n, S;
        std::cin >> a >> b >> n >> S;

        if(S > ((n * a) + b))
            std::cout << "NO" << std::endl;
        else {
            if((n * a) == S)
                std::cout << "YES" << std::endl;
            else {
                if((n * a) > S) {
                    int64_t p = (S / n) * n;
                    int64_t t = S - p;

                    if(t <= b)
                        std::cout << "YES" << std::endl;
                    else
                        std::cout << "NO" << std::endl;
                }
                else {
                    int64_t p = n * a;
                    int64_t t = S - p;

                    if(t <= b)
                        std::cout << "YES" << std::endl;
                    else
                        std::cout << "NO" << std::endl;
                }
            }
        }
    }
}
