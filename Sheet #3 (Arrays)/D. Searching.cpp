#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    long long x, i, size, counter = 0;
    cin >> size;
    long long arr[size];
    for (i = 0; i < size; i++)
        cin >> arr[i];
    cin >> x;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == x)
        {
            x = i;
            counter++;
            break;
        }
    }
    if (counter > 0)
        cout << x;
    else
        cout << -1;

    return 0;
}