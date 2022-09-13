#include <bits/stdc++.h>
using namespace std;
int main()
{

    long i, x, y, sum = 0;
    cin >> x >> y;
    while (x > 0 && y > 0)
    {
        if (x > y)
        {
            for (int i = y; i <= x; i++)
            {
                cout << i << " ";
                sum += i;
            }
            cout << "sum =" << sum << endl;
            sum = 0;
        }
        else if (x < y)
        {
            for (int i = x; i <= y; i++)
            {
                cout << i << " ";
                sum += i;
            }
            cout << "sum =" << sum << endl;
            sum = 0;
        }
        else if (x == y)
            cout << x << " sum =" << x << endl;
        cin >> x >> y;
    }
    return 0;
}