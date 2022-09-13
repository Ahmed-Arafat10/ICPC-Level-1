#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string a("abcdefghijklmnopqrstuvwxyz");

    string str;
    cin >> str;
    long myarr[26] = {0};
    long counter = 0;
    for (int i = 0; i < str.size(); i++)
    {
        for (int j = 0; j < a.size(); j++)
        {
            if (str[i] == a[j])
                myarr[j]++;
        }
    }

    for (int j = 0; j < a.size(); j++)
    {
        if (myarr[j] >= 1)
            counter++;
    }

    if (counter % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
    return 0;
}
 