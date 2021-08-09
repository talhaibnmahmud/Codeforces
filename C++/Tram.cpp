#include <iostream>

using namespace std;

int main()
{
    int n, a, b;
    int people = 0, capacity = 0;

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a >> b;
        people = people - a + b;

        if(people > capacity)
            capacity = people;
    }

    cout << capacity;

    return 0;
}
