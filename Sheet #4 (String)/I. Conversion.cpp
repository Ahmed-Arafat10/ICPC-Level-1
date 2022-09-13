#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str1;
    cin >> str1;
    for (int i = 0; i < str1.size(); i++)
    {
        if (str1[i] == ',')
            str1[i] = ' ';
    }
    cout << str1;
    return 0;
}