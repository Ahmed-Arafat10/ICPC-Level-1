#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    string alph = "abcdefghijklmnopqrstuvwxyz";
    long count_clock = 0, count_anticlock = 0, counter = 0;
    long position_clock = 0, position_anticlock = 0, position = 0;
    for (int i = 0; i < str.size(); i++)
    {
        for (int j = position, k = 0;; j++, k++)
        {
            if (j == 26)
                j = 0;
            if (str[i] == alph[j])
            {
                position_clock = j;
                break;
            }
            else
                count_clock++;
            if (k == 25)
                break;
        }
        for (int j = position, k = 0;; j--, k++)
        {
            if (str[i] == alph[j])
            {
                position_anticlock = j;
                // count_anticlock++;
                break;
            }
            else
                count_anticlock++;
            if (k == 26)
                break;
            if (j == 0)
                j = 26;
        }
        if (count_clock < count_anticlock)
        {
            counter += count_clock;
            position = position_clock;
        }
        else
        {
            counter += count_anticlock;
            position = position_anticlock;
        }
        count_clock = 0, count_anticlock = 0;
    }
    cout << counter;
    return 0;
}