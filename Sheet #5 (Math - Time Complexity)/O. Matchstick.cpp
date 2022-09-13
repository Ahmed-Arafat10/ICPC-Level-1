#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, w = 2, result = 1;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        result += w;
        w++;
    }
    cout << result * 3;
}