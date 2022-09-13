#include <iostream>

using namespace std;

int main()
{
    long long x, y, even = 0, odd = 0, post = 0, negt = 0;
    cin >> x;

    for (int i = 1; i <= x; i++)
    {
        cin >> y;
        if (y % 2 == 0)
            even++;
        else
            odd++;
        if (y > 0)
            post++;
        if (y < 0)
            negt++;
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << post << endl;
    cout << "Negative: " << negt;
    return 0;
}