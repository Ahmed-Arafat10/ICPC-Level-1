#include <iostream>

using namespace std;

int main()
{
    int x, counter = 0;
    cin >> x;

    for (int i = 1; i <= x; i++)
    {
        if (i % 2 == 0)
        {
            counter++;
            cout << i << endl;
        }
    }
    if (counter == 0)
        cout << -1;
    return 0;
}