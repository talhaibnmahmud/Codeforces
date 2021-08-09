#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++)
        cin >> array[i];

    if(array[0] % 2 == array[1] % 2)
    {
        for(int i = 2; i < n; i++)
            if(array[i] % 2 != array[0] % 2)
            {
                cout << i + 1;
                return 0;
            }
    }
    else if(array[0] % 2 == array[2] % 2)
    {
        for(int i = 0; i < n; i++)
            if(array[i] % 2 != array[0] % 2)
            {
                cout << i + 1;
                return 0;
            }
    }
    else if(array[1] % 2 == array[2] % 2)
    {
        for(int i = 0; i < n; i++)
            if(array[i] % 2 != array[1] % 2)
            {
                cout << i + 1;
                return 0;
            }
    }
}
