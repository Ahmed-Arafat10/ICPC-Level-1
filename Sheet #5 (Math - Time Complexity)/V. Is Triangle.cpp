#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c, s1, s2, s3;
    cin >> a >> b >> c;
    s1 = a + b;
    s2 = b + c;
    s3 = c + a;
    if (s1 > c && s2 > a && s3 > b)
        cout << "Valid";
    else
        cout << "Invalid";
}