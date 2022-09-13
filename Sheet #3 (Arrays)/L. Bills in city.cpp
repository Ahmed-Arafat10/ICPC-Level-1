#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int max = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int num = abs(arr[i] - arr[i + 1]);
        if (num > max)
            max = num;
    }
    cout << max;

    return 0;
}