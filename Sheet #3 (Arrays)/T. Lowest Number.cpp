#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int min = arr[0];
    int cmin = 0;
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
            cmin = i;
        }
    }

    cout << min << " " << cmin + 1;
    return 0;
}