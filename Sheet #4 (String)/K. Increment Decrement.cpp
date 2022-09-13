#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str1;
    cin >> str1;
    long num = 0, max = 0;
    for (int i = 0; i < str1.size(); i++)
    {
        if (str1[i] == 'I')
            num++;
        if (str1[i] == 'D')
            num--;
        if (num > max)
            max = num;
    }
    cout << max;
    return 0;
}