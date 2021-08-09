#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n][3];
    for(int i = 0; i < n; i++)
        cin >> array[i][0] >> array[i][1] >> array[i][2];

    int x = 0, y = 0, z = 0;
    for(int i = 0; i < n; i++)
    {
        x = x + array[i][0];
        y = y + array[i][1];
        z = z + array[i][2];
    }

    if(x == 0 && y == 0 && z == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
