#include <iostream>

using namespace std;

int main()
{
    long n, m;
    cin >> n >> m;
    long arr[n][m];
    for (long i = 0; i < n; i++)
    {
        for (long j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    long num, counter = 0;
    cin >> num;
    for (long i = 0; i < n; i++)
    {
        for (long j = 0; j < m; j++)
        {
            if (num == arr[i][j])
                counter++;
        }
    }

    if (counter == 0)
        cout << "will take number";
    else
        cout << "will not take number";
    return 0;
}