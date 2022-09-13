#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long x, y, sum = 0;
    cin >> x;
    for (long long i = 1; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            sum += i;
            if (x / i != i)
                sum += x / i;
        }
    }
    cout << sum;
}