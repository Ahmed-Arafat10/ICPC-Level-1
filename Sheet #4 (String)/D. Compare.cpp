#include <iostream>

using namespace std;

int main()
{

    string str1, str2;
    cin >> str1 >> str2;
    long x = str1.size() > str2.size() ? str1.size() : str2.size();
    if (str1 == str2)
        cout << str1;
    else
        for (int i = 0; i < x; i++)
        {
            if (str1[i] == str2[i])
                continue;
            else if (str1[i] < str2[i])
            {
                cout << str1;
                break;
            }
            else if (str1[i] > str2[i])
            {
                cout << str2;
                break;
            }
        }

    return 0;
}