#include <iostream>

using namespace std;

int main()
{
    int n, a, b, x, y;
    cin >> n >> a >> x >> b >> y;

    for( ; a != x && b != y; )
    {
        a++;
        if(a > n)
            a = 1;
        b--;
        if(b < 1)
            b = n;
        if(a == b)
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";

    return 0;
}
