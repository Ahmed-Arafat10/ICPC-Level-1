#include <bits/stdc++.h>
#include <iostream>
using namespace std;
const int N = 1e3 + 9;
int main()
{
    int n;
    scanf("%d", &n);
    int arr[N];
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", arr + i);
        if (arr[i] <= 10)
            cout << "A[" << i << "] = " << arr[i] << endl;
    }
    return 0;
}