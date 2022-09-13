#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int size;
    cin >> size;
    string str;
    cin >> str;
    long long int counta = 0, countb = 0, count_step = 0;
    int x = 2;
    for (int i = 0; i < str.size(); i += 2)
    {
        if (str[i] == 'a')
            counta++;
        if (str[i] == 'b')
            countb++;
        if (str[i + 1] == 'b')
            countb++;
        if (str[i + 1] == 'a')
            counta++;
        if (countb == 2)
        {
            count_step++;
            str[i] = 'a';
        }
        if (counta == 2)
        {
            count_step++;
            str[i] = 'b';
        }
        counta = 0, countb = 0;
    }
    cout << count_step << endl
         << str;
    return 0;
}