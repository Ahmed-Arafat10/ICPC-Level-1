#include <bits/stdc++.h>
using namespace std;
int main()
{
    char Str[100];
    string str;
    cin >> str;
    int size = str.size();
    cout << (26 * (size + 1) - size);
    return 0;
}