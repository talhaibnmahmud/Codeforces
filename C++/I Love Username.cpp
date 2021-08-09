#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++)
        cin >> array[i];

    int largest = array[0];
    int smallest = array[0];
    static int count = 0;

    for(int i = 1; i < n; i++)
    {
        if(array[i] > largest)
        {
            largest = array[i];
            count++;
        }
        else if(array[i] < smallest)
        {
            smallest = array[i];
            count++;
        }
    }

    cout << count;
    return 0;
}
