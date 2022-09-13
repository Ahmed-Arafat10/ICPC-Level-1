#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long n, i;
    cin >> n;
    long long arr[n];
    long long sum = 0;
    for (i = 0; i < n; ++i)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << abs(sum);
    return 0;
}