#include <bits/stdc++.h>
using namespace std;
long counter[26];
int main()

{
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        int x = (int)str[i];
        for (int j = 0; j < 26; j++)
        {
            int A = (int)j + 'A';
            int a = (int)j + 'a';
            if (x == A)
            {
                str[i] = str[i] - 'A' + 'a';
            }
            if (x == a)
            {
                str[i] = str[i] - 'a' + 'A';
            }
        }
    }
    cout << str;
    return 0;
}

 