#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    for(int i = 0; i < s.length(); i = i + 2)
    {
        for(int j = 0; j < s.length() - i - 1; j = j + 2)
        {
            if(s[j] > s[j + 2])
                swap(s[j], s[j + 2]);
        }
    }

    cout << s;

    return 0;
}
