#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str, s1 = "", s2 = "", s3 = "";
    cin >> str;
    string small = str;
    if (str.size() == 1)
        cout << str;
    else
    {
        for (int i = 0; i < str.size() - 1; i++)
        {
            s1 = str.substr(0, i + 1);
            s2 = str.substr(i + 1, str.size() - 1);
            sort(s1.begin(), s1.end());
            sort(s2.begin(), s2.end());
            s3 = s1 + s2;
            if (small > s3)
                small = s3;
            s1 = "", s2 = "", s3 = "";
        }
        cout << small;
    }
    return 0;
}

 