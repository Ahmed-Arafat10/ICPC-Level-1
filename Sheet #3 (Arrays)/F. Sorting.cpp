#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    long i, j, size;
    cin >> size;
    long arr[size];
    for (i = 0; i < size; i++)
        cin >> arr[i];

    for (i = 0; i < size; i++)
    {

        for (j = 0; j < i; j++)
        {
            if (arr[i] < arr[j])
            {
                int swap = arr[i];
                arr[i] = arr[j];
                arr[j] = swap;
            }
        }
    }

    for (i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}