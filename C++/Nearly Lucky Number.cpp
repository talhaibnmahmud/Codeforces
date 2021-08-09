#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    int64_t n;
    cin >> n;

    ostringstream num;
    num << n;

    string number = num.str();

    int count = 0;
    for(int i = 0; i < number.length(); i++)
    {
        if(number[i] == '4' || number[i] == '7')
            count++;
    }

    ostringstream lucky;
    lucky << count;

    string nearly_lucky = lucky.str();

    for(int i = 0; i < nearly_lucky.length(); i++)
    {
        if(nearly_lucky[i] == '4' || nearly_lucky[i] == '7')
        {
            continue;
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}
