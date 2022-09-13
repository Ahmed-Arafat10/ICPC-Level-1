#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, d;
    cin >> n >> d;
    string str1;
    stringstream ooo;
    ooo << d;
    ooo >> str1;

    for (int i = 0; i <= n; i++)
    {
        string str;
        stringstream oo;
        oo << i;
        oo >> str;
        for (int j = 0; j < str.size(); j++)
        {
            if (str[j] == str1[0])
            {
                cout << i << " ";
                break;
            }
        }
    }
    return 0;
}