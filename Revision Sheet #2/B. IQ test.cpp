#include <iostream>
#include <vector>
using namespace std;
int main()
{
    long n, counteven = 0, countodd = 0;
    cin >> n;
    long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            counteven++;
        }
        else
        {
            countodd++;
        }
    }
    if (counteven > countodd)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
                int x;
            else
                cout << i + 1;
        }
    }

    else
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
                cout << i + 1;
        }
    }
    return 0;
}
 