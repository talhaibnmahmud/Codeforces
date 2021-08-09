#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, avg, sum = 0;
    static int coin = 0;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++)
    {
        cin >> array[i];
        sum = sum + array[i];
    }
    avg = ceil(sum / 2);

    for(int i = 0; i < n; i ++)
        for(int j = 0; j < n - i - 1; j++)
            if(array[j] > array[j + 1])
                swap(array[j], array[j + 1]);

    int mine = 0;
    for(int i = n - 1; i >= 0; i--)
    {
        mine = mine + array[i];
        coin++;

        if(mine > avg)
            break;
    }

    cout << coin;

    return 0;
}
