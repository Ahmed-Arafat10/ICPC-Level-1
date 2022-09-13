#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str1;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> str1;
        if (str1.size() <= 10)
            cout << str1 << endl;
        else
        {
            cout << str1[0] << str1.size() - 2 << str1[str1.size() - 1] << endl;
        }
    }
    return 0;
}