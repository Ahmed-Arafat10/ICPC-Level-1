#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    long i, x, y, sumodd = 0;
    while (t--)
    {

        cin >> x >> y;
        if (x > y)
        {
            for (int i = y + 1; i < x; i++)
            {
                if (!(i % 2 == 0))
                    sumodd += i;
            }
            cout << sumodd;
            sumodd = 0;
            if (t != 0)
                cout << endl;
        }
        else if (x < y)
        {
            for (int i = x + 1; i < y; i++)
            {
                if (!(i % 2 == 0))
                    sumodd += i;
            }
            cout << sumodd;
            sumodd = 0;
            if (t != 0)
                cout << endl;
        }
        else if (x == y)
            cout << 0 << endl;
    }
}