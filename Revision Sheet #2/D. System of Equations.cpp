#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    long n, m, counter = 0;
    cin >> n >> m;
    long bigger = max(n, m);
    for (int i = 0; i <= bigger; i++)
    {
        for (int j = 0; j <= bigger; j++)
        {
            if (((i * i) + j == n) && (i + (j * j) == m))
                counter++;
        }
    }
    cout << counter;
    return 0;
}
 