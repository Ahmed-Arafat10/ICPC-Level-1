#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
    long long int n, k, sumB = 0, sumC = 0;
    cin >> n;
    long long int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
            sumC += arr[i];

        else
            sumB += arr[i];
    }

    cout << sumB - sumC;
    return 0;
}

 