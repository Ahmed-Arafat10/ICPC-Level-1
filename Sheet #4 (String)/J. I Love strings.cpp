#include <bits/stdc++.h>

using namespace std;

int main()
{

    string str1, str2, str3 = "";
    int t;
    cin >> t;
    while (t--)
    {
        cin >> str1 >> str2;
        int x = 0;
        for (int i = 0;; i++)
        {
            if (str1.size() != 0 && str2.size() != 0)
            {
                str3 += str1[x];
                str3 += str2[x];
                // cout<<"this"<<str3;
                str1.erase(str1.begin());
                str2.erase(str2.begin());
            }
            if (str1.size() == 0)
            {
                str3 += str2;
                break;
            }
            if (str2.size() == 0)
            {
                str3 += str1;
                break;
            }
        }

        cout << str3 << endl;
        str3 = "";
    }
    return 0;
}