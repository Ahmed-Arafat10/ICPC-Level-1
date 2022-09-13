#include <bits/stdc++.h>
using namespace std;
long counter[26];
int main()

{
    string str;
    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        int x = (int)str[i] - 'a';
        for (int j = 0; j < 26; j++)
        {
            if (x == j)
                counter[j]++;
        }
    }
    for (int j = 0; j < 26; j++)
    {
        if (counter[j] >= 1)
        {
            char x = (char)j + 'a';
            cout << x << " : " << counter[j] << endl;
        }
    }
    return 0;
}