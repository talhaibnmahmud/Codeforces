#include <iostream>

using namespace std;

int main()
{
    int n, step = 1;
    static int count = 1;
    cin >> n;
    int array[n];

    for(int i = 0; i < n; i++)
        cin >> array[i];

    for(int i = 0; i < n - 1; i++)
    {
        if(array[i + 1] >= array[i])
            step++;
        else if(array[i + 1] < array[i])
            step = 1;

        if(count < step)
            count = step;
    }

    cout << count;

    return 0;
}
