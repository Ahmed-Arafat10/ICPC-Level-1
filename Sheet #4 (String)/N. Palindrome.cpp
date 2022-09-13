#include <bits/stdc++.h>
using namespace std;
long counter[26];
int main()

{
    string str;
    cin >> str;
    string rev = "";
    for (int j = str.size() - 1; j >= 0; j--)
    {
        rev += str[j];
    }
    if (rev == str)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}