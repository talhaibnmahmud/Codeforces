#include <iostream>

using namespace std;

int main()
{
    string s;
    int n;
    static int count = 0;

    cin >> n;
    cin >> s;

    for(int i = 0; i < s.length(); i++)
        if(s[i] == s[i + 1])
            count++;

    cout << count;

    return 0;
}
