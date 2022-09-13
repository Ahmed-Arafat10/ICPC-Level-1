#include <iostream>

using namespace std;

int main()
{
    long long n, h;
    cin >> n >> h;
    long long int x, y, sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        sum += x * y;
    }
    if (sum <= (h * 60))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}