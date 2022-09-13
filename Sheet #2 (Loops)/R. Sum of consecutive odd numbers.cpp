#include <iostream>

using namespace std;

int main()
{
    long x, y, sumodd = 0, tcase, counter = 0;
    cin >> tcase;
    for (int r = 1; r <= tcase; r++)
    {
        cin >> x >> y;
        if (y == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            for (int i = x;; i++)
            {
                if (i % 2 == 0)
                    int z = 0;
                else
                {
                    sumodd += i;
                    counter++;
                }
                if (counter == y)
                    break;
            }

            cout << sumodd << endl;
            sumodd = 0;
            counter = 0;
        }
    }

    return 0;
}