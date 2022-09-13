#include <bits/stdc++.h>

using namespace std;

int main()
{

    string str1;
    cin >> str1;
    long long int sum1 = 0, sum0 = 0;
    for (int i = 0; i < str1.size(); i++)
    {
        if (str1[i] == '1')
            sum1++;
        if (str1[i] == '0')
            sum0++;
    }
    cout << abs(sum1 - sum0);
    return 0;
}