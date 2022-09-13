#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long int x, y, sum = 0;
    cin >> x >> y;
    if (x > y)
    {
        for (int i = y; i <= x; i++)
        {
            sum += i;
        }
        cout << sum;
    }
    else if (x < y)
    {
        for (int i = x; i <= y; i++)
        {
            sum += i;
        }
        cout << sum;
    }
    else if (x == y)
    {
        cout << x;
    }
}