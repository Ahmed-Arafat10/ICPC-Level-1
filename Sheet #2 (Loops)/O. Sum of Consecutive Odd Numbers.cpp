#include <iostream>

using namespace std;

int main()
{
    int tcase;
    long x, y, sum = 0;
    cin >> tcase;
    for (int r = 1; r <= tcase; r++)
    {
        cin >> x >> y;
        if (x < y || x == y)
        {
            for (int i = x + 1; i < y; i++)
            {
                if (i % 2 == 0)
                    int x;
                else
                    sum += i;
            }
            cout << sum << endl;
            sum = 0;
        }
        else if (y < x)
        {
            for (int i = x - 1; i > y; i--)
            {
                if (i % 2 == 0)
                    int x;
                else
                    sum += i;
            }
            cout << sum << endl;
            sum = 0;
        }
    }
    return 0;
}