#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    long i, size;
    cin >> size;
    long arr[size];
    for (i = 0; i < size; i++)
        cin >> arr[i];

    for (i = size - 1; i >= 0; i--)
        cout << arr[i] << " ";

    return 0;
}