#include <bits/stdc++.h>
using namespace std;
int main()
{
    long num;
    cin >> num;
    string alph = "abcdefghijklmnopqrstuvwxyz";
    string str1, str2;
    char c1[26] = {0};
    char c2[26] = {0};
    string output[num];
    bool isEqual = false;
    while (num--)
    {
        cin >> str1 >> str2;
        for (int i = 0; i < str1.size(); i++)
        {
            for (int j = 0; j < 26; j++)
            {
                if (str1[i] == alph[j])
                    c1[j]++;
                if (str2[i] == alph[j])
                    c2[j]++;
            }
        }
        for (int j = 0; j < 26; j++)
        {
            if (c1[j] >= 1 && c2[j] >= 1)
            {
                for (int k = j, w = 0; w < str1.size(); k++, w++)
                {
                    if ((c1[k] >= 1) && (c2[k] >= 1))
                        isEqual = true;
                }
                break;
            }
        }
        for (int j = 0; j < 26; j++)
        {
            c1[j] = 0;
            c2[j] = 0;
        }
        if (isEqual)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        isEqual = false;
    }
    return 0;
}