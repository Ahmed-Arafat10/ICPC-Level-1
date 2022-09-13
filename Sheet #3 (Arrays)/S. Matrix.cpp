#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    long arr[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> arr[i][j];
        }
    }
    long sum1 = 0, sum2 = 0;
    for (int i = 0, j = N - 1; i < N; i++, j--)
    {

        sum1 += arr[i][i];
        sum2 += arr[i][j];
    }

    cout << abs(sum1 - sum2);
    return 0;
}