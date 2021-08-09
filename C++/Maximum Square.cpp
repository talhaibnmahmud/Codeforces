#include <iostream>
#include <vector>

int main()
{
    int test_case;
    std::cin >> test_case;

    for(int i = 0; i < test_case; i++) {
        int n;
        std::cin >> n;

        std::vector<int> length;
        length.resize(n + 1, 0);


        for(int i = 0; i < n; i++) {
            int x;
            std::cin >> x;
            length[x]++;
        }

        for(int i = n - 1; i > 0; i--)
            length[i] += length[i + 1];

        for(int i = n; i > 0; i--)
            if(length[i] >= i) {
                std::cout << i << std::endl;
                break;
            }
    }
}
