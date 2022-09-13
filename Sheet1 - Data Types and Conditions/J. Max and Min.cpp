#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int a, b, c, max = 0, min = 0;
    cin >> a >> b >> c;
    if (a >= b && a >= c)
    {
        max = a;
        if (c > b)
            min = b;
        else
            min = c;
    }
    if (b >= a && b >= c)
    {
        max = b;
        if (a > c)
            min = c;
        else
            min = a;
    }
    if (c >= a && c >= b)
    {
        max = c;
        if (a > b)
            min = b;
        else
            min = a;
    }

    cout << min << " " << max;
    return 0;
}