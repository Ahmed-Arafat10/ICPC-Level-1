#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    long arr1[str1.size()] = {0};
    long arr2[str2.size()] = {0};
    char c[5] = {'a', 'e', 'i', 'o', 'u'};
    for (int i = 0; i < str1.size(); i++)
    {

        for (int j = 0; j < 5; j++)
        {
            if (str1[i] == c[j])
                arr1[i]++;
        }
    }
    for (int i = 0; i < str2.size(); i++)
    {

        for (int j = 0; j < 5; j++)
        {
            if (str2[i] == c[j])
                arr2[i]++;
        }
    }
    bool issuper = true;
    if (str1.size() != str2.size())
        cout << "No";
    else
    {
        for (int i = 0; i < str1.size(); i++)
        {
            if (arr1[i] != arr2[i])
            {

                issuper = false;
                break;
            }
        }
        if (issuper)
            cout << "Yes";
        else
            cout << "No";
    }
    return 0;
}

 