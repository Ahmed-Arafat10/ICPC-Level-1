#include <iostream>

using namespace std;

int main()
{
    long n, m, sum = 0;
    // cin>>x;

    while (true)
    {
        cin >> n >> m;
        if (n <= 0 || m <= 0)
            break;

        if (n > m || n == m)
        {
            for (int i = m; i <= n; i++)
            {
                cout << i << " ";
                sum += i;
            }
            cout << "sum =" << sum << endl;
            sum = 0;
        }
        if (n < m)
        {
            for (int i = n; i <= m; i++)
            {
                cout << i << " ";
                sum += i;
            }
            cout << "sum =" << sum << endl;
            sum = 0;
        }
    }

    return 0;
}